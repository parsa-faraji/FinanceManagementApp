//
//  Account.h
//  FinanceManagementApp
//
//  Created by Parsa Faraji on 11/15/24.
//

#ifndef Account_h
#define Account_h

struct Account {
    auto accountNumber;
    auto routingNumber;
    auto balance;

};

void setAccountNumber(const Account& account, const auto& accountNumber);
void setRoutingNumber(const Account& account, const auto& routingNumber);
void setBalance(const Account& account, const auto& balance);

auto getAccountNumber(const Account& account);
auto getRoutingNumber(const Account& account);
auto getBalance(const Account& account);


#endif /* Account_h */
