class Solution {
public:
    
    int findlow_ind(vector<int> &a, int target, int i)
    {
        if(i==a.size())
        {
            return -1;
        }
        
        if(a[i]==target)
        {
            return i;
        }
        else
        {
            int x=findlow_ind(a,target,i+1);
            return x;   
        }
    }
     int findhigh_ind(vector<int> &a, int target, int i)
    {
        if(a.size()==i)
        {
            return -1;
        }
         int x=findhigh_ind(a, target, i+1);
         if(x==-1)
         {
             if(a[i]==x)
             {
                 return i;
             }
             else
             {
                 return -1;
             }
         }
         else
         {
             return x;
         }
    }
    vector<int>v;
    vector<int> searchRange(vector<int>& a, int target) {
        int i=0;
        int x=findlow_ind(a,target,i);
        int y=findhigh_ind(a,target,i);
        
        v.push_back(x);
        v.push_back(y);
        
        return v;
    }
};








