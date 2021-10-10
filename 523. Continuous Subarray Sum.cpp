class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n=a.size(),i,j;
        int count=0;
        int sum=0;
        map<int,int>m;
        m[0]=1;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            
            count=count+m[sum-k];
            
            m[sum]++;
        }
        return count;
    
    }
};
