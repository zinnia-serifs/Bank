// account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "customer.h"

struct Account {
    struct Customer owner;
    double balance;
};

#endif
