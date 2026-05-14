class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mt;
        for(int i=0; i<nums.size(); i++){
            if(mt.find(nums[i])!=mt.end())
                return {mt[nums[i]], i};
            mt[target - nums[i]] =i;
        }
        return {};
    }
};
