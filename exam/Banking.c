#include<stdio.h>
float bankBalance, withdrawalAmount;
int main()
{
    printf("What's your Bank Balance? ");
    scanf("%f", &bankBalance);
    withdrawalAmount<=150000 & withdrawalAmount>0;
    printf("What's your withdrawal amount? ");
    scanf("%f", &withdrawalAmount);
    (withdrawalAmount<=bankBalance & withdrawalAmount<=150000 & withdrawalAmount>0) ? printf("Thanks for banking with us") : printf("Retry. Please review your inputs and withdrawal limit.");
    return 0;
}