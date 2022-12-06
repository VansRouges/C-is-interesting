#include<stdio.h>
int number;
int main()
{
    printf("Enter a number: ");
    scanf("%d", &number);
    (number % 2 == 0) ? printf("Your number is even") : printf("Your number is odd");
    return 0;
}