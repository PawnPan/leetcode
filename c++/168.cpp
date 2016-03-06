class Solution {
public:
    string convertToTitle(int n) {
        string ans = "";
        int itmp;
        while (n >= 26) {
            n -= 1;
            int itmp = n % 26;
            ans = char (itmp + 'A') + ans;
            n /= 26;
        }
        n -= 1;
        if (n >= 0) ans = char (n + 'A') + ans;
        return ans;
    }
};
