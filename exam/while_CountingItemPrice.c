#include<stdio.h>

int main()
{
    int itemPrice;
    printf("please enter item price, or \n -101 to print total:");
    scanf("%d", &itemPrice);
    int total=0;
    total=itemPrice;
    // 1 represents true
    while (1){
        printf("please enter item price:");
        scanf("%d", &itemPrice);
        if(itemPrice== -101){
            break;
            }
        total+=itemPrice;
       
        
    }
    printf("Total: %d", total);
    return 0;
}