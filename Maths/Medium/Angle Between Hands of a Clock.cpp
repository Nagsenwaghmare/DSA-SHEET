#include<bits/stdc++.h>
using namespace std;


double angleClock(int hour, int minutes) {
        if(hour==12){
            double angle = (5.5)*minutes;
            return min(360-angle,abs(angle));
        }
        double angle = (30*hour)-((5.5)*minutes);
        return min(360-abs(angle),abs(angle));
    }