class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
       
        int mx = -1;
        int value;
        
        map<int,int>mp;
        
        for(int i=0; i<nums.size(); i++)
        {
            
            ++mp[nums[i]];
            
            if(mx<=mp[nums[i]])
            {
                mx = mp[nums[i]];
                value = nums[i];
            }
        }
        
        
        
        
        
        return value;
        
        
        //Time Complexity = O(n)
        //Space Complexity = O(1)
        
    }
};
