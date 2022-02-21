class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>vc) {
    
    sort(vc.begin(),vc.end()); /// O(nlogn)
    
    int x1 = vc[0][0];
    int y1 = vc[0][1];
        
    int counter = 1;
        
    for(int i=1; i<vc.size(); i++) ///O(n)
    {
        int x2 = vc[i][0];
        int y2 = vc[i][1];
        
        if(x2>x1 and y2>y1)
        {
            counter++;
        }
        
        if(vc[i][1]>y1)
        {
            x1 = x2;
            y1 = y2;
        }
        
    }
        
        
    /// O(nlogn)
    /// O(1)
   
        
      
      
        return counter;
        
    }
};
