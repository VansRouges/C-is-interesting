#include <stdio.h> 

int main() { 	
    int seconds, DD, HH, MM, SS; 	
    printf("Input seconds: "); 	
    scanf("%d", &seconds); 
    DD = (seconds/(3600*24));	 	
    seconds%= (24*3600);
    HH = seconds/3600;
    seconds%=3600;
    MM = seconds/60;
    seconds%=60;
    SS =seconds;
    printf("DD:HH:MM:SS - %02d:%02d:%02d:%02d\n",DD, HH, MM, SS);
    return 0;
}