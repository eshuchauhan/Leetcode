class StockSpanner {
public:
    StockSpanner() {
        
    }
    stack<pair<int,int>>s;
    int next(int a) {
        int x=1;
        while(s.size()>0 && a>=s.top().first)
        {
            x=x+s.top().second;
            s.pop();
        }
        s.push(make_pair(a,x));
        return x;
    }
};
