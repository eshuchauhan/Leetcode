class Solution {
public:
    int minMoves(vector<int>& a) {
        
        int i,j,n=a.size();
        int sum=0;
        int mini=INT_MAX;
//         instead of increasing (n-1) elements , decrease single element by 1;
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
            mini=min(a[i],mini);
        }
        return sum-n* mini;
    }
};
