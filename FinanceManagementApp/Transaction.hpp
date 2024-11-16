//
//  Transaction.hpp
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/15/24.
//

#ifndef Transaction_hpp
#define Transaction_hpp

#include <stdio.h>
#include "Date.h"
#include "Account.h"
#include "Time.h"
#include <iostream>
using std::string;


// check if two transactions are equal
// stream overload for displaying

struct Transaction {
    Date date;
    Time time;
    Account account;
    int amount;
    string category;
    string method;
};

void setAmount(const Transaction& transaction, int amount);
void setCategory(const Transaction& transaction, string category);
void setMethod(const Transaction& transaction, string method); // enum
#endif /* Transaction_hpp */
