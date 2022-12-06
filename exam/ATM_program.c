#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//a program for an ATM machine
// we are using void main() as it is dynamic
// no return 0; or system(PAUSE);
// IN Unsigned there is no negative
unsigned long amount=1000,deposit,withdraw;
int choice,pin,k;
char transaction ='y';
void main() {
  while (pin != 1234){
    printf("\nEnter your secret pin:");
    scanf("%d", &pin);
    if (pin != 1234)
        printf("incorrect pin!\nPLEASE ENTER A VALID PIN!!");
 }
do {
    printf("\n WELCOME TO MY ATM SERVICE! :)\n");
    printf("1 - Check balance\n");
    printf("2 - Withdraw\n");
    printf("3 - Deposit\n");
    printf("4 - Quit \n");
    printf("*****************???\n\n");
    printf("ENTER YOUR CHOICE:");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("\nYour balance is %lu", amount);
            break;
        case 2:
            printf("\nEnter the amount to be withdrawn:");
            scanf("%lu",&withdraw);
            if (withdraw % 100 !=0) {
                printf("\nPlease enter the amount in multiples of hundred!");
            }
            else if (withdraw<(amount-500)) {
                printf("\nINSUFFICIENT FUND!!");  
            }
            else {
                amount=amount-withdraw;
                printf("\n\nPLEASE COLLECT YOUR CASH!!");
                printf("\nYour current balance is: %lu",amount);
                }
            break;  
        case 3:
            printf("\nENTER THE AMOUNT TO BE DEPOSITED:");
            scanf("%lu",&deposit);
            amount=amount+deposit;
            printf("\nYour new balance is %lu", amount);
               break;
        case 4:
            printf("\nTHANK YOU FOR USING OUR ATM");
            break;
        default:
            printf("\nINVALID CHOICE");
    }
    printf("\n\nDo you wish to have another transaction?(Y/N)\n");
    scanf("%c", &transaction);
    getch();
    fflush(stdin);
    //it helps in clearing things (flush)
    if (transaction == 'N' || transaction == 'n'){
    k=1;
    }
    }
    while(!k);
    printf("\n\nTHANKS FOR BANKING WITH US!!");
    }