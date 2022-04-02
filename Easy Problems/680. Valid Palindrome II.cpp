class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        int misMatch1 = 0;
        while(i<=j)
        {
            if(s[i] != s[j])
            {
                misMatch1++;
                i++;
            }
            else
            {
                i++;
                j--;
            }  
        }
        i = 0;
        j = s.length()-1;
        int misMatch2 = 0;
        while(i<=j)
        {
            if(s[i] != s[j])
            {
                misMatch2++;
                j--;
            }
            else
            {
                i++;
                j--;
            }  
        }
        if(misMatch1 <= 1 or misMatch2++ <= 1) return true;
        else return false;
    }
};
