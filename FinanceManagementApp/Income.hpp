//
//  Income.hpp
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/15/24.
//

#ifndef Income_hpp
#define Income_hpp

#include <stdio.h>
#include "Date.h"
#include "Account.h"
#include <iostream>
using std::string;

struct Income {
    Date payDay;
    int amount;
    string payer;
};

void setPayDay(const Income& income, const Date& payDay);
void setAmount(const Income& income, const auto& amount);
void setPayer(const Income& income, const auto& payer);

Date& getPayDay(const Income& income);

int getAmount(const Income& income);

string getPayer(const Income& income);

#endif /* Income_hpp */
