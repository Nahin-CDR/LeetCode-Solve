//Solver : Nahin the Coder
//Date : 02 - 08 - 2021
#include<bits/stdc++.h>
using namespace std;


bool isPallindrome(string s)
{
    int left = 0;
    int right = s.length()-1;

    while(left<right)
    {
        if(islapha(s[left]) == 0 and isdigit(s[left]) == 0)
        {
            left++;
            continue;
        }
        if(islapha(s[right]) == 0 and isdigit(s[right]) == 0)
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




int main()
{
    string str;
    cin>>str;
    if(isPallindrome(str))
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
    return 0;
}
