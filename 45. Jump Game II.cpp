class Solution {
public:
    int jump(vector<int>& a) {
        
        int n=a.size();
        int i,steps=0,max_reach=0,current_pos=0;
        
        for(i=0;i<n-1;i++)
        {
            max_reach=max(max_reach,i+a[i]);
            
            if(i==current_pos)
            {
                steps++;
                current_pos=max_reach;
            }
        }
        
        return steps;
        
    }
};
