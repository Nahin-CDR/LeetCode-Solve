//Solver : Nahin the Coder
//Date   : 07 - 08 - 2021

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int a;
        int b;
        bool flag = false;
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j=0; j<nums.size(); j++)
            {
                if(i == j)
                {
                    continue;
                }
                else
                {
                    if(nums[i] + nums[j] == target)
                    {
                        return {i,j};
                        break;
                    }
                }
            }
        }
        return {-1,-1};
    }
};
