// bank.c
#include <stdio.h>
#include "account.h"

void display_account(struct Account* acc) {
    printf("Account Owner: %s\n", acc->owner.name);
    printf("Balance: $%.2f\n", acc->balance);
}

void deposit(struct Account* acc, double amount) {
    acc->balance += amount;
}

void withdraw(struct Account* acc, double amount) {
    if (acc->balance >= amount) {
        acc->balance -= amount;
    } else {
        printf("Insufficient funds\n");
    }
}

int main() {
    struct Customer customer = {1, "John Doe", "123 Main St"};
    struct Account account = {customer, 1000.0};

    display_account(&account);

    deposit(&account, 500.0);
    withdraw(&account, 200.0);

    display_account(&account);

    return 0;
}
