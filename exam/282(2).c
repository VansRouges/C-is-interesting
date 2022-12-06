#include<stdio.h>

// a program that would add three numbers and find their average

int main()
{
    int number1=5, number2=7, number3=2, sum;
    float average;
    sum = number1+number2+number3;
    printf("the sum of numbers is %d", sum);
    average = sum/3;
    printf("\nthe average of the numbers is %f", average);
    
    // this time I'm asking the user for their input
    int input1, input2, input3, add;
    float average2;
    printf("\n\nenter a number:");
    scanf("%d", &input1);
    printf("enter a second number:");
    scanf("%d", &input2);
    printf("enter a third number:");  
    scanf("%d", &input3);
    add = input1+input2+input3;
    printf("the sum of numbers is %d", add);
    average2 = add/3;
    printf("\nthe average of the numbers is %f", average2);
    
    // program that would collect all three numbers at the same time
    int num1, num2, num3, Ans;
    float Avg;
    printf("\n\nenter the three numbers:");
    scanf("%d%d%d", &num1, &num2, &num3);
    Ans = num1+num2+num3;
    printf("the sum of numbers is %d", Ans);
    Avg = Ans/3;
    printf("\nthe average of the numbers is %f", Avg);
 
    return 0;
}