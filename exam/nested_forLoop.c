#include<stdio.h>
/* a program that would use a nested
 for loop to write numbers */

int main()
{
    int i, j;
    for(i=1;i<=3;i++){
        for(j=1;j<=5;j++){
           printf("%d", i);
          
        }
        printf("\n");
    }
  
    return 0;
}