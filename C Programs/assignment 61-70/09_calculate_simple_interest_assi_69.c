#include<stdio.h>
void main()
{
    double p,r,t,si;
    system("cls");
    printf("Enter principle amount ");
    scanf("%lf",&p);
    printf("Enter duration in year ");
    scanf("%lf",&t);
    printf("Enter rate of intrest per year ");
    scanf("%lf",&r);
    si=(p*t*r)/100;
    printf("simple intrest= %lf",si);
}