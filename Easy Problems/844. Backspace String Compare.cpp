class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        if(s == t) return true;
        int cnt1 = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '#' and cnt1 > 0) cnt1--;
            else if(s[i] == '#' and cnt1 <= 0) continue;
            else s[cnt1++] = s[i];
        }
        int cnt2 = 0;
        for(int i=0; i<t.length(); i++)
        {
            if(t[i] == '#' and cnt2 > 0) cnt2--;
            else if(t[i] == '#' and cnt2 <= 0) continue;
            else t[cnt2++] = t[i];
        }
        if(cnt1 != cnt2) return false;
        for(int i=0; i<cnt1; i++)
        {
            if(s[i] != t[i]) return false;
        }
        return true;
    }
};
