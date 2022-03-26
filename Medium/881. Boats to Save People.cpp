class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        
        if(people.size() == 1)
        {
            return 1; 
        }
        else if(people.size() == 2)
        {
            if(people[0]+people[1] <= limit)
            {
                return 1;
            }
            else
            {
                return 2;
            }
        }
        
        
        
        sort(people.begin(),people.end()); //   O( nlog(n) )
        
        int i = 0;
        int j = people.size()-1;
        
        int boat = 0;
        
        while(i<=j)
        {
            if(i == j)
            {
                
                boat++;
                i++;
                j--;
                //cout<<"s"<<" "<<people[i];
            }
            else if(people[i]+people[j] <= limit)
            {
                boat++;
                i++;
                j--;
            }
            else if(people[i]+people[j] > limit)
            {
                boat++;
                j--;
            }
        }
        
       
        
        
        
        
        
        
        return boat;
        
    }
};
