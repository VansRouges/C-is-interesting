#include<stdio.h>
// simultaneously equation
int main()
{

double a,b,c,p,q,r,x,y;
printf("Enter the coefficents of the first equation of the form ax+by=c\n");
scanf("%lf%lf%lf",&a,&b,&c);
printf("Enter the coefficents of the second equation of the form px+qy=r\n");

scanf("%lf%lf%lf",&p,&q,&r);
x=((c*q)-(r*b)/(a*q)-(p*b));
y=(c*p-r*a)/(b*p-q*a);
printf("The value of x=%lf\n",x);
printf("The value of y=%lf\n",y);
return 0;
}