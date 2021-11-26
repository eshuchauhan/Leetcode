class Solution {
public:
    int maxDistance(vector<int>& a) {
        
        int n=a.size();
        
        int maxi=0;
        
        if(a[0]!=a[n-1]) return n-1;
        
        for(int i=1;i<n;i++)
        {
            if(a[0]!=a[i])
                maxi=max(maxi,i);
            
            if(a[i]!=a[n-1])
                maxi=max(maxi,n-i-1);
        }
        return maxi;
    }
};
