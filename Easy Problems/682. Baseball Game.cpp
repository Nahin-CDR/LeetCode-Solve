class Solution {
public:
    int calPoints(vector<string>& ops) {
        if(ops.size() == 1) 
        {
            stringstream ss(ops[0]);
            int x = 0;
            ss>>x;
            return x;
        }
        vector<int>bucket;
        int sum = 0;
        for(int i=0; i<ops.size(); i++)
        {
            if(ops[i] == "D")
            {
               int len = bucket.size()-1;
               int val = bucket[len]*2;
               sum += val;
               bucket.push_back(val);
            }
            else if(ops[i] == "C")
            {
                int len = bucket.size()-1;
                sum = sum - bucket[len];
                bucket.pop_back();
            }
            else if(ops[i] == "+")
            {
                int a = bucket.size()-1;
                int b = bucket.size()-2;
                bucket.push_back(bucket[a]+bucket[b]);
                sum += bucket[a]+bucket[b];
            }
            else
            {
                stringstream ss(ops[i]);
                int x = 0;
                ss>>x;
                bucket.push_back(x);
                sum += x;
            }
             // for(auto i : bucket) cout<<i<<" ";
             // cout<<"\n";
        }
        // for(auto i : bucket) cout<<i<<" ";
        return sum;
        
    }
};
