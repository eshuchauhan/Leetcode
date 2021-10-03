Approach : (i) take a variable and initialize it to zero
(ii) iterate over the loop and check if variable value is smaller than current index.....return false
(iii) else try to get maximum jumps from current index (let's say : i+a[i] ) and store that maximum jump
in that variable
(iv) If u reach at the end of array.....then u will get ur ans


class Solution {
public:
bool canJump(vector<int>& a) {
    
    int max_reach_index=0;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(max_reach_index<i)
        {
            return false;
        }
        max_reach_index=max(max_reach_index,i+a[i]);
    }
    return true;
}
};
