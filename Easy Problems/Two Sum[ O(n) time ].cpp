//Solver : Nahin the Coder
//Date   : 07 - 08 - 2021

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int a = -1;
        int b = -1;
        map<int,int>mp;
        int difference;
        
        for(int i=0; i<nums.size(); i++)
        {
            difference = target - nums[i];
            if(mp.count(difference) > 0) // if that digit exists in my LIST
            {
                a = mp[difference];
                b = i;
                break;
            }
            else
            {
                mp[nums[i]] = i;
            }
        }
        return {a,b};
        
    }
};
