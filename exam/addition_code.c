#include<stdio.h>
//creating an addition code
int number1;
int number2;
int answer;
int main()
{   printf("please enter first number:");
    scanf("%d",&number1);
        //& is used for assign the value to the variable
    printf("please enter second number:");
    scanf("%d",&number2);
    answer = number1 + number2;
    printf("sum: %d", answer);
    return 0;
}

