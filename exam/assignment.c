#include<stdio.h>
#include<limits.h>
int main(void)
{
    int intVar;
    int CHAR;
    unsigned int unsignedintVar;
    long longVar;
    short shortVar;
    printf("CHAR MAX:      \t\t\t%d", SCHAR_MAX);
    printf("\nCHAR MIN:    \t\t\t%d", SCHAR_MIN);
    printf("\nINT MAX:  \t\t\t%d", INT_MAX);
    printf("\nINT MIN:  \t\t\t%d", INT_MIN);
    printf("\nLONG MAX:\t\t\t%d", LONG_MAX);
    printf("\nLONG MIN:\t\t\t%d", LONG_MIN);
    printf("\nSHORT CHAR MAX:\t\t\t%d", CHAR_MAX);
    printf("\nSHORT CHAR MIN:\t\t\t%d", SCHAR_MIN);
    printf("\nSHORT MAX:\t\t\t%d", SHRT_MAX);
    printf("\nSHORT MIN:\t\t\t%d", SHRT_MIN);
    printf("\nUNSIGNED CHAR MAX:\t\t%d", UCHAR_MAX);
    printf("\nUNSIGNED INT MAX:\t\t%u", UINT_MAX);
    printf("\nUNSIGNED LONG MAX:\t\t%u", ULONG_MAX);
    printf("\nUNSIGNED SHORT MAX:\t\t%d", USHRT_MAX);
    
    return 0;
}