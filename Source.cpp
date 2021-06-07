#include "Time.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
//#include <stdlib.h>

Time::Time() {
    _hour = 0;
    _min = 0;
    _s = 0;
}
Time::Time(int hour) {
    setHour(hour);
    int min;
    setMin(min = 0);
    int s;
    setS(s = 0);
}
Time::Time(int hour, int min) {
    setHour(hour);
    setMin(min);
    int s;
    setS(s = 0);
}
Time::Time(int hour, int min, int s) {
    setHour(hour);
    setMin(min);
    setS(s);
}
Time::Time(char* time) {
    char* mass = time;
    char arr[2];
    int i = 0;
    while (*mass) {
        int n = strtol(arr, &mass, 10);
        while (*mass == ':') {
            mass++;
        }
        arr[i] = mass;
        i++;
    }
    setHour(arr[0]);
    setMin(arr[1]);
    setS(arr[2]);
}

Time::Time(Time& time) {
    setHour(time.getHour());
    setMin(time.getMin());
    setS(time.getS());
}
Time::~Time() {}

Time& Time::operator=(Time& time) {
    setHour(time.getHour());
    setMin(time.getMin());
    setS(time.getS());

    return *this;
}

void Time::setHour(int hour) {
    if (hour >= 0 && hour <= 23)
        _hour = hour;
    else _hour = 0;
}

void Time::setMin(int min) {
    if (min >= 0 && min <= 59)
        _min = min;
    else _min = 0;
}

void Time::setS(int s) {
    if (s >= 0 && s <= 59)
        _s = s;
    else _s = 0;
}
void ShowTime(int hour, int min, int s) {
    std::cout << hour << ":" << min << ":" << s << std::endl;
}

int Time::getHour() {
    return _hour;
}
int Time::getMin() {
    return _min;
}
int Time::getS() {
    return _s;
}