#include<stdio.h>
// A program that squares numbers
int main()
{
    int i;
    int SIZE=10;
    int value[SIZE];
    for (i=0; i<SIZE;i++)
    value[i]=i*i;
    for(i=0;i<SIZE;i++)
    printf("%d %10d\n", i, value[i]);
    return 0;
}