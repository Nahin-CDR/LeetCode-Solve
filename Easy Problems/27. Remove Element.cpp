class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int res = 0;
        int i = 0;
        int len = nums.size();
        
        while(i<len)
        {
            if(nums[i] != val)
            {
                nums[res] = nums[i];
                res++;
            }
            i++;
        }
        return res;
    }
};
