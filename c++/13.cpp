class Solution {
public:
    int romanCharToInt(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
    }
    int romanToInt(string s) {
        if (s.size() == 0) return 0;
        int ans = romanCharToInt(s[0]);
        for (int i = 1; i != s.size(); i ++) {
            ans += romanCharToInt(s[i]);
            if (romanCharToInt(s[i]) > romanCharToInt(s[i-1])) {
                ans -= 2 * romanCharToInt(s[i-1]);
            }
        }
        return ans;
    }
};
