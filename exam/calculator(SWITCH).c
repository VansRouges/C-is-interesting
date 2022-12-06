#include<stdio.h>
/* a program that would add, subtract, 
multiply and divide numbers */

int main()
{
    float value1, value2, answer;
    int option;
    printf ("enter the two numbers:");
    scanf("%f%f", &value1, &value2);
    printf("ENTER \n1:for addition \n2:for subtraction \n3:for multiplication \n4:for division");
    scanf("\n%d", &option);
    
    switch (option){
        case 1:
        answer= value1+value2;
        printf("%f + %f =%f", value1, value2, answer);
        break;
        
        case 2:
        answer= value1 - value2;
        printf("%f - %f =%f", value1, value2, answer);
        break;
        
        case 3:
        answer= value1*value2;
        printf("%f × %f =%f", value1, value2, answer);
        break;
        
        case 4:
        answer= value1/value2;
        printf("%f ÷ %f =%f", value1, value2, answer);
        break;
        
        default:
        printf("there is an error in your input");
        break;
    }
    if (option!= 1 || 2 || 3 || 4)
    
   
    return 0;
}