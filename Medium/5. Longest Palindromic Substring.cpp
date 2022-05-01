class Solution{
public:
    string longestPalindrome(string s){        
        pair<int,int>max_bound =  make_pair(0,0);
        int maxLen = 0;
        //we should care about every single character as a center
        for(int i=0; i<s.length(); i++)
        {
            FindMaxFuckingPalindrome(s,i,i,maxLen,max_bound);
            if(i>0)
            {
                FindMaxFuckingPalindrome(s,i-1,i,maxLen,max_bound);
            }
        }
        return s.substr(max_bound.first,maxLen);
    }
private:
    void FindMaxFuckingPalindrome(string &str,int left,int right,int &maxLen,pair<int,int>&max_bounds){
        while(right<str.length() and left >= 0 and str[left] == str[right])
        {
            if(right-left+1 > maxLen)
            {
                maxLen = right-left+1;
                max_bounds.first = left;
                max_bounds.second = right;
            }
            left--;
            right++;
        }
    }
};
