#include <iostream>
#include <string.h>
#include <stdio.h>
#include "Time.h"

//using namespace std;

static void printTime(Time& time) {
    std::cout << "Hours: " << time.getHour() << std::endl;
    std::cout << "Min: " << time.getMin() << std::endl;
    std::cout << "S: " << time.getS() << std::endl;
}

static Time* enterTime() {
    std::cout << "Choose menu element:" << std::endl;
    std::cout << "1. Create empty object\n2. Enter hours\n3. Enter hours, minutes\n4. Enter hours, minutes, seconds\n5. hh:mm:ss" << std::endl;
    int c;
    std::cin >> c;

    Time* time = NULL;

    if (c == 1) {
        time = new Time();
    }
    else if (c == 2) {
        int hour;
        std::cout << "Hours:" << std::endl;
        std::cin >> hour;
        time = new Time(hour);
    }
    else if (c == 3) {
        int hour, min;
        std::cout << "Hours:" << std::endl;
        std::cin >> hour;
        std::cout << "Min:" << std::endl;
        std::cin >> min;
        time = new Time(hour, min);
    }
    else if (c == 4) {
        int hour, min, s;
        std::cout << "Hours:" << std::endl;
        std::cin >> hour;
        std::cout << "Min:" << std::endl;
        std::cin >> min;
        std::cout << "Seconds:" << std::endl;
        std::cin >> s;
        time = new Time(hour, min, s);
    }
    else if (c == 5) {
        char arr[0], arr[1], arr[2];
        std::cout << "Hours:" << std::endl;
        std::cin >> arr[0];
        std::cout << "Min:" << std::endl;
        std::cin >> arr[1];
        std::cout << "Seconds:" << std::endl;
        std::cin >> arr[2];
        time = new Time(arr[0], arr[1], arr[2]);
    }
    else {
        std::cout << "Unknown input!" << std::endl;
    }
    return time;
}

int main() {
    while (1) {
        Time* time = enterTime();
        printTime(*time);
        std::cout << "If you want to exit, type exit, else type something" << std::endl;
        std::string s;
        std::cin >> s;
        if (s == "exit")
            break;
    }
}