#include<stdio.h>
int main(){
double r,x;
const double pie = 3.14;
printf("Enter your desired radius:r \n");
scanf("%lf",&r);
x=(pie*(r*r));
printf("The Area of the Circle is %lf\n",x);

return 0;
}