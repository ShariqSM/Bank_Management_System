#include<stdio.h>

#include<string.h>



struct bank

{

    char customer_name[100];

    int account_no;

    int account_balance;

    char add[100];

    char city[100];

};



struct bank e[];



int createaccount();

void viewaccount(int n);

void addmoney(int n);

void withdraw(int n);
