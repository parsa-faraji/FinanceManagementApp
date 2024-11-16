//
//  Income.cpp
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/15/24.
//

#include "Income.hpp"

void setPayDay(const Income& income, const Date& payDay){
    income.payDay = payDay;
};

void setAmount(const Income& income, const auto& amount){
    income.amount = amount;
};

void setPayer(const Income& income, const auto& payer){
    income.payer = payer;
};

Date& getPayDay(const Income& income) {
    return income.payDay; // just memory address
}

int getAmount(const Income& income) {
    return income.amount;
}

string getPayer(const Income& income){
    return income.payer;
}
