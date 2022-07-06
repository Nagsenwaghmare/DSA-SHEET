class Solution {
public:
    bool isleap(int year){
        if (year % 400 == 0) return true;
        if (year % 100 == 0) return false;
        if (year % 4 == 0) return true;
        return false;
    }
    string dayOfTheWeek(int day, int month, int year) {
        string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int daysOfMonth []= {31,28,31,30,31,30,31,31,30,31,30,31};
        int num = 0;
        for(int i = 1971;i<year;i++){
            if(isleap(i)) num += 366;
            else num += 365;
        }
        if(isleap(year)) daysOfMonth[1] = 29;
        for(int i = 0;i<month-1;i++){
            num += daysOfMonth[i];
        }
        num += day - 1;
        return week[(num + 5)%7];
    }
};