class Solution {
public:
       int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int max_len = 1;
        int tmp_len = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1]+1){
                tmp_len++;
            }
            else{
                max_len = max(max_len, tmp_len);
                tmp_len = 1;
            }
        }
        return max(max_len, tmp_len);
    }
};
