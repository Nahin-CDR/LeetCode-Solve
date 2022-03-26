
//Time Complexity => O(log n)
//Space Complexity => O(1)


class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if(nums.size() == 1)
        {
            if(nums[0] == target)
            {
                return 0;
            }
            else
            {
                return -1;
            }
        }
        int start = 0;
        int last = nums.size();
        int turn = last/2+1;
        while(turn--)
        {
            int mid = (start + last)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(target < nums[mid])
            {
                last = mid;
            }
            else
            {
                start = mid;
            }
        }
        
        return -1;
    }
};
