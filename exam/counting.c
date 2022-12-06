#include<stdio.h>
//a program that will count but skip a number
// then we skipped two numbers

int main()
{
int count;
for(count=1; count<=10; count++){
if(count==5 || count==7 || count==8)
continue;
printf("%d", count);
printf("\t");
}

    return 0;
}