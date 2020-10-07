#include<header.h>



int createaccount()

{

    static int i=0,n=0;

    printf("Enter customer name:\n");

    scanf("\n20%s",e[i].customer_name);

    printf("Enter the acc no:\n");

    scanf("%d",&e[i].account_no);

    e[i].account_balance=0;

    printf("Enter the customer address:\n");

    scanf("\n20%s",e[i].add);

    printf("Enter the bank branch:\n");

    scanf("\n20%s",e[i].city);

    printf("Account Created Successfully\n");

    n++;i++;

    return n;

}



void viewaccount(int n)

{

    if(n==0)

    {

        printf("No Account to display\n");

        goto end;

    }

    int i,acc, flag=0, z;

    printf("Enter your Account number\n");

    scanf("%d",&acc);

    for(i=0;i<n;i++)

    {

        if(acc==e[i].account_no)

        {

            z=i;

            flag=1;

            break;

        }

    }

        if(flag==1)

        {

            printf("Welcome User\n");

            printf("Name : %20s\n",e[z].customer_name);

            printf("Account Number : %d\n",e[z].account_no);

            printf("Available Balance : Rs. %d\n",e[z].account_balance);

            printf("Address : 20%s\n",e[z].add);

            printf("Bank City : 20%s\n",e[z].city);

        }

        else

        {

            printf("Invalid Account\n");

        }

    end:

    ;

}



void addmoney(int n)

{

    if(n==0)

    {

        printf("No Account to display\n");

        goto end;

    }

    int z,i,acc,amount,flag=0;

    printf("Enter the Account number\n");

    scanf("%d",&acc);

    printf("Enter the amount need to be add in your account\n");

    scanf("%d",&amount);

    for(i=0;i<n;i++)

    {

        if(acc==e[i].account_no)

        {

            e[i].account_balance=e[i].account_balance+amount;

            z=i;

            flag=1;

            break;

        }

    }

    if(flag==1)

    {

    printf("Amount Credited Successfully!!!\n");

    printf("Your Available Balance is Rs.%d\n",e[z].account_balance);

    }

    else

    {

        printf("Account not found\n");

    }

    end:

    ;

}



void withdraw(int n)

{

    if(n==0)

    {

        printf("No Account to display\n");

        goto end;

    }

    int z,i,acc,amount, flag=0;

    printf("Enter the Account number\n");

    scanf("%d",&acc);

    printf("Enter the amount need to be withdraw from your account\n");

    scanf("%d",&amount);

    for(i=0;i<n;i++)

    {

        if(acc==e[i].account_no)

        {

            if(e[i].account_balance > amount)

            {

                e[i].account_balance=e[i].account_balance-amount;

                z=i;

                flag=1;

                break;

            }

            else

            {

                printf("Insufficient amount\n");

                flag=2;

                break;

            }

        }

    }

    if(flag==1)

    {

        printf("Cash Withdraw has been  Successfully Done!!!\n");

        printf("Your Current Balance is Rs.%d\n",e[z].account_balance);

    }

    else if(flag!=2)

    {

        printf("Invalid account\n");

    }

    end:

    ;

}

