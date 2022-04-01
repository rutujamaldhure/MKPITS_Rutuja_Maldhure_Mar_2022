#include<stdio.h>
#include<conio.h>
void main()
{
float a, b, h, area;
printf("Enter length of 1st side in cm ");
scanf("%f", &a);
printf("Enter length of 2nd side in cm ");
scanf("%f", &b);
printf("Enter height of trapazoid in cm ");
scanf("%f", &h);
area=0.5*(a+b)*h;
printf("Area of trapazoid is %f sqcm", area);
getch();
}