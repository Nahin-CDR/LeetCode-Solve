class Solution {
public:
   
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length()-1;

        while(left<right)
        {
             if(isalpha(s[left]) == 0 and isdigit(s[left]) == 0)
             {
                 left++;
                 continue;
             }
             if(isalpha(s[right]) == 0 and isdigit(s[right]) == 0)
             {
                 right--;
                 continue;
             }
             if(tolower(s[left]) != tolower(s[right]))
             {
                 return false;
             }
             left++;
             right--;
        }
        return true;
    }
};
