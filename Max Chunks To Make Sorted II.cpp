class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
        int i,j,n=a.size();
        vector<int>v(n+1);
        int leftmax=INT_MIN;
        v[n]=INT_MAX;
        for(i=n-1;i>=0;i--)
        {
            v[i]=min(v[i+1],a[i]);
        }
        int count=0;
        for(i=0;i<n;i++)
        {
            leftmax=max(a[i],leftmax);
            if(leftmax<=v[i+1])
            {
                count++;
            }
        }
        return count;
    }
};
