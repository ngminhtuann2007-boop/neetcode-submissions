#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
         static vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> suffix_product;
        vector<int> prefix_product;
        int max_len = nums.size();
        for (int i = 0; i < max_len; i++)
        {
            suffix_product.push_back(moi(nums, i, 1));
            prefix_product.push_back(moi(nums, i, 0));
        }
        for(int i=0; i < max_len; i++){
            nums[i] = suffix_product[i]*prefix_product[i];
        }
        return nums;
    }
    static int moi(vector<int> nums, int n, int flag)
    {
        if ((n == 0 && flag == 1) || (n == nums.size() && flag == 0))
            return 1;
        int max = 1;
        if (flag)
        {
            for (int i = 0; i < n; i++)
            {
                max *= nums[i];
            }
        }
        else
        {
            for (int i = nums.size() - 1; i > n; i--)
            {
                max *= nums[i];
            }
        }
        return max;
    }
};
