class Solution {
public:
    int maxChunksToSorted(vector<int>& a) {
        int i,j,n=a.size(),maxi=0,count=0;
        for(i=0;i<n;i++)
        {
            maxi=max(a[i],maxi);
            if(i==maxi)
                count++;
        }
        return count;
    }
};
