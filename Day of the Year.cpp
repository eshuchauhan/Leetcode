class Solution {
public:
    int dayOfYear(string s) {
        int i,n=s.size();
        
        int days[]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        
        int year=stoi(s.substr(0,4));
        int month=stoi(s.substr(5,2));
        int day=stoi(s.substr(8));
        
//         check it is leap year or not;
        
        if(month>2 and year%4==0 and (year%400==0 || year%100!=0))
        {
            day++;
        }
        month--;
        while(month>0)
        {
            day=day+days[month-1];
            month--;
        }
        
        return day;
    }
};
