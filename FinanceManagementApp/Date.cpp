//
//  Date.cpp
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/16/24.
//

#include <stdio.h>
#include "Income.hpp"

// pass by reference  // throw errors
void setYear(const Date& date1, const auto& year){
    date1.year = year;
}

void setMonth(const Date& date1, const auto& month){
    date1.month = month;
}
    
void setDay(const Date& date1, const auto& day){
    date1.day = day;
}

auto getYear(const Date& date1) {
    return date1.year;
}

auto getMonth(const Date& date1) {
    return date1.month;
}

auto getDay(const Date& date1) {
    return date1.day;
}

bool operator==(const Date& date1, const Date& date2) {
    return (date1.year == date2.year) && (date1.month == date2.month) &&
    (date1.day == date2.day);
}

ostream& operator<<(ostream& stream, const Date& date) {
    return stream << date.month << "/" << date.day << "/" << date.year;
}

