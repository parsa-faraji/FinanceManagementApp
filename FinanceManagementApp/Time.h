//
//  Time.h
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/15/24.
//

#ifndef Time_h
#define Time_h

#include <iostream>
using namespace std;

struct Time {
    short int hour;
    short int minute;
    short int second;
};

bool operator==(const Time& time1, const Time& time2);
ostream& operator<<(ostream& stream, const Time& time);

void setHour(const Time& time, const auto& hour);
void setMinute(const Time& time, const auto& minute);
void setSecond(const Time& time, const auto& second);

auto getHour(const Time& time);
auto getMinute(const Time& time);
auto getSecond(const Time& time);

#endif /* Time_h */
