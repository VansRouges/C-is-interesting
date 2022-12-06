#include<stdio.h>
int main()
{
    float num1, num2, answer;
    int operation;
    printf("Enter a number:");
    scanf("%f", &num1);
    printf("enter the second number:");
    scanf("%f", &num2);
    printf("1: addition\n");
    printf("2: multiplication\n");
    printf("3: subtraction\n");
    printf("4: division\n");
    scanf("%d", &operation);
    
    switch (operation){
        case 1:
        answer= num1 + num2;
        printf("Answer: %f", answer);
        break;
        case 2:
        answer= num1*num2;
        printf("Answer: %f", answer);
        break;
        case 3:
        answer= num1-num2;
        printf("Answer: %f", answer);
        break;
        case 4:
        answer= num1/num2;
        printf("Answer: %f", answer);
        break;
        default:
        printf("select a valid operator");
        break;
    }
    return 0;
}