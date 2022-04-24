class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        map<char,int>bucket;
        bucket['I'] = 1;
        bucket['V'] = 5;
        bucket['X'] = 10;
        bucket['L'] = 50;
        bucket['C'] = 100;
        bucket['D'] = 500;
        bucket['M'] = 1000;
        //we should care about only when 
        //I is before V[5] and X[10]  = subtract 1
        //X is before L[50] and C[100] = subtract 10
        //C is before D[500] and M[1000] = subtract 100
        for(int i=0; i<s.length(); i++)
        {
            sum += bucket[s[i]];
            if(s[i] == 'V' and i>0)
            {
                if(s[i-1] == 'I')
                {
                    sum = sum-1;
                    sum = sum-bucket[s[i-1]];
                }
            }
            else if(s[i] == 'X' and i>0)
            {
                if(s[i-1] == 'I')
                {
                    sum = sum-1;
                    sum = sum-bucket[s[i-1]];
                }
            }
            else if(s[i] == 'L' and i>0)
            {
                if(s[i-1] == 'X')
                {
                    sum = sum - 10;
                    sum = sum-bucket[s[i-1]];
                }
            }
            else if(s[i] == 'C' and i>0)
            {
                if(s[i-1] == 'X')
                {
                    sum = sum - 10;
                    sum = sum-bucket[s[i-1]];
                }
            }
            else if(s[i] == 'M' and i>0)
            {
                if(s[i-1] == 'C')
                {
                    sum = sum - 100;
                    sum = sum-bucket[s[i-1]];
                }
            }
            else if(s[i] == 'D' and i>0)
            {
                if(s[i-1] == 'C')
                {
                    sum = sum - 100;
                    sum = sum-bucket[s[i-1]];
                }
            }
            else
            {
                //do nothing
            }
        }
        return sum;
    }
};
