#ifndef _TIME
#define _TIME
#include <iostream>
#include <stdio.h>
#include <string.h>

class Time {
private:
    int _hour, _min, _s;
    char mass{ 8 };
public:
    Time();
    Time(int hour);
    Time(int hour, int min);
    Time(int hour, int min, int s);
    Time(char* time);
    Time(Time& time);
    ~Time();
    Time& operator=(Time& time);
    void setHour(int hour);
    void setMin(int min);
    void setS(int s);
    void setTime(char* time);
    int getHour();
    int getMin();
    int getS();
    int getTime();
};
#endif 
