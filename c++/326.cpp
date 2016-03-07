class Solution {
public:
    bool isPowerOfThree(int n) {
        return (n > 3) && (1162261467 % n == 0);
    }
};
