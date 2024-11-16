//
//  Date.h
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/15/24.
//

#ifndef Date_h
#define Date_h
#include <iostream>
using namespace std;

struct Date {
    short int year;
    short int month;
    short int day;
};

bool operator==(const Date& date1, const Date& date2);

ostream& operator<<(ostream& stream, const Date& date);

void setYear(const Date& date1, const auto& year);
void setMonth(const Date& date1, const auto& month);
void setDay(const Date& date1, const auto& day);

auto getYear(const Date& date1);
auto getMonth(const Date& date1);
auto getDay(const Date& date1);

#endif /* Date_h */
