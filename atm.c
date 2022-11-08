#include <stdio.h>
#include <stdlib.h>

//ATM machine
#include<stdio.h>
#include<stdlib.h>
unsigned long amount = 1000, deposit, withdraw;
int choice, pin ,k;
char transaction = 'y';

void main()
{ while (pin != 1520)
{ printf("Enter you pin number");
scanf("%d", &pin);
if(pin != 1520)
printf("Enter your valid password\n");
}
    do
    { printf("welcome to my ATM service");
    printf("1. check balance\n");
    printf("2. withdraw cash\n");
    printf("3. deposit cash\n");
    printf("quit\n");
    printf("****?\n\n");
    printf("Enter your choice");
    scanf("%d", &choice);
    switch (choice)
    { case 1:
    printf("\n Your balance is %lu",amount);
    break;
    case 2:
    printf("\n Enter the amount to withdraw"); 
    scanf("%lu", &withdraw);
    if (withdraw % 100 != 0)
    { printf("\n please enter the amount in multiple of 100");
     }
    else if (withdraw > (amount - 500))
    {
    printf("\n insufficient balance");
    }
    else
    { amount = amount - withdraw;
    printf("\n please collect your cash");
    printf("\n your current balance is %lu",amount);
    }
    break;
    case 3: 
    printf("Enter the amount to deposit");
    scanf("%lu", &deposit);
    amount = amount + deposit;
    printf("your balance is %lu", amount);
    break;
    case 4:
    printf("\n thank you for using our ATM ");
    break;
    default:
    printf("\nEnter the right choice");
    }
    printf("\n\n Do you wish to have another transaction? (y/n\n)");
    fflush(stdin);
    scanf("%c", &transaction);
    if (transaction == 'n' || transaction == 'N')
    k = 1; 
    
    }
    
    while ( !k );
    { printf("\n thanks for using our ATM");
    }
    
    
}