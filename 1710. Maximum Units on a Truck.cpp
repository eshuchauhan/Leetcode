class Solution {
public:
    
    bool static comparator(vector<int> &x,vector<int> &y){
        return (x[1]>y[1]);}
        
    int maximumUnits(vector<vector<int>>& a, int trucksize) {
        
        sort(a.begin(),a.end(),comparator);
        
        int currweight=0;
        int ans=0;
        
        for(int i=0;i<a.size();i++)
        {
            if(currweight+a[i][0]<=trucksize)
            {
                currweight+=a[i][0];
                ans=ans+a[i][1]*a[i][0];
            }
            else if(currweight+a[i][0]>trucksize)
            {
                int remaining_size = trucksize-currweight;
                
                ans=ans+a[i][1]*remaining_size;
                
                break;
            }
        }
        return ans;       
    }
};
