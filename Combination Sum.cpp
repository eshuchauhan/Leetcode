class Solution {
public:
    
    void function(int index,int target, vector<int>&a, vector<int>&v,vector<vector<int>>&ans)
    {
        if(index==a.size())
        {
            if(target==0)
            {
                ans.push_back(v);
            }
            return;
        }
        if(a[index]<=target)
        {
            v.push_back(a[index]);
            function(index,target-a[index],a,v,ans);
            v.pop_back();
        }
        function(index+1,target,a,v,ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        
        vector<int>v;
        
        function(0,target,candidates,v,ans);
        
        return ans;
        
        
    }
};
