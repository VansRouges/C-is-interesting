#include<stdio.h>
#include<limits.h>
int main(void)
{
    int intVar;
    unsigned int unsignedintVar;
    long longVar;
    short shortVar;
    printf("Intvar was allocated %d bytes", sizeof(intVar));
    printf("\nlongVar is allocated %d bytes", sizeof(longVar));
    printf("\nMinimum value for type \"int\": %d", INT_MIN);
    printf("\nMinimum value for type \"int\": %d", INT_MAX);
    return 0;
}