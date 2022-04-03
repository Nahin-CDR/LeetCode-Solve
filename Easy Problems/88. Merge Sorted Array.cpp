class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        int LastCount = (m+n)-1;
        int cnt1 = m-1;
        int cnt2 = n-1;
        
        while(cnt1 >= 0 and cnt2 >= 0)
        {
            if(nums1[cnt1] < nums2[cnt2])
            {
                nums1[LastCount] = nums2[cnt2];
                cnt2--;
                LastCount--;
            }
            else
            {
                nums1[LastCount] = nums1[cnt1];
                cnt1--;
                LastCount--;
            }
        } 
        
        while(cnt2 >= 0)
        {
            nums1[LastCount--] = nums2[cnt2--];
        }
        
        
    }
};


