//
//  Time.cpp
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/16/24.
//

#include <stdio.h>

#include "Time.h"


// opeartor overloading

bool operator==(const Time& time1, const Time& time2) {
    return (time1.hour == time2.hour) && (time1.minute == time2.minute) &&
    (time1.second == time2.second);
}

ostream& operator<<(ostream& stream, const Time& time) {
    return stream << time.hour << ":" << time.minute << ":" << time.second;
}


// setter functions
void setHour(const Time& time, const auto& hour) {
    time.hour = hour;
};

void setMinute(const Time& time, const auto& minute) {
    time.minute = minute;
};

void setSecond(const Time& time, const auto& second){
    time.second = second;
};

// getter functions
auto getHour(const Time& time) {
    return time.hour;
};
auto getMinute(const Time& time) {
    return time.minute;
};

auto getSecond(const Time& time) {
    return time.second;
};
