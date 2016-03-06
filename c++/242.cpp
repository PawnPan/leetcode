class Solution {
public:
    bool isAnagram(string s, string t) {
        int scnt[256] = {0}, tcnt[256] = {0};
        for (int i = 0; i != s.size(); i ++) {
            scnt[s[i]] ++;
            tcnt[t[i]] ++;
        }
        for (int i = 0; i != 256; i ++) {
            if (scnt[i] != tcnt[i]) return false;
        }
        return true;
    }
};
