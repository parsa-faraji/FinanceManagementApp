//
//  Account.cpp
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/16/24.
//

#include <stdio.h>
#include "Account.h"

// opeator overload


void setAccountNumber(const Account& account, const auto& accountNumber) {
    account.accountNumber = accountNumber;
};
void setRoutingNumber(const Account& account, const auto& routingNumber) {
    account.routingNumber = routingNumber;
};
void setBalance(const Account& account, const auto& balance) {
    account.balance = balance;
};

auto getAccountNumber(const Account& account) {
    return account.accountNumber;
};
auto getRoutingNumber(const Account& account) {
    return account.routingNumber;
};
auto getBalance(const Account& account) {
    return account.balance;
};
