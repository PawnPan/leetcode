class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int sum = prices.size();
        for (int i = 1; i < sum; i ++) {
            if (prices[i] > prices[i - 1]) ans += prices[i] - prices[i - 1];
        }
        return ans;
    }
};
