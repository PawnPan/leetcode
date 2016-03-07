class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int length = nums.size();
        int ans = (length + 1) * length / 2;
        for (int i = 0; i != length; i ++) {
            ans -= nums[i];
        }
        return ans;
    }
};
