class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long total = 1;
        vector<int> ans;
        int zerocount = 0;
        int sum = nums.size();
        
        for (int i = 0; i != sum; i ++) {
            if (nums[i] != 0) {
                total *= nums[i];
            } else {
                zerocount ++;
            }
        }
        
        for (int i = 0; i != sum; i ++) {
            if (nums[i] != 0) {
                if (zerocount != 0) {
                    ans.push_back(0);
                } else {
                    ans.push_back(total/nums[i]);
                }
            } else {
                if (zerocount == 1) {
                    ans.push_back(total);
                } else {
                    ans.push_back(0);
                }
            }
        }
        return ans;
    }
};
