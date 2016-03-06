class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int ans = 0;
        vector<int> res;
        int sum = nums.size();
        for (int i = 0; i != sum; i ++) {
            ans ^= nums[i];
        }
        
        int n = ans & (~(ans - 1));
        
        
        res.push_back(0);
        res.push_back(0);
        
        for (int i = 0;i != sum; i ++) {
            if ((nums[i]&n) != 0) {
                res[0] ^= nums[i];
            } else {
                res[1] ^= nums[i];
            }
        }
        return res;
    }
};
