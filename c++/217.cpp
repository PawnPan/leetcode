class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> ans;
        int sum = nums.size();
        for (int i = 0; i != sum; i ++) {
            if (ans.count(nums[i])) {
                return true;
            } else {
                ans.insert(pair<int,int>(nums[i],i));
            }
        }
        return false;
    }
};
