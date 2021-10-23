int findLongestConseqSubseq(int a[], int n)
    {
       int i;
        set<int>s;
        for(i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        int maxi=0;
        for(i=0;i<n;i++)
        {
            if(s.find(a[i]-1)==s.end())
            {
                int x=a[i];
                int count=1;
                while(s.find(x+1)!=s.end())
                {
                    count++;
                    x++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
      
    }
};
