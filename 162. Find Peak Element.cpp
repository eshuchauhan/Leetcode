class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i,n=nums.size();
        if(n==1)
        {
            return 0;
        }
        for(i=1;i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                return i-1;
            }
        }
        return n-1;
    }
};
