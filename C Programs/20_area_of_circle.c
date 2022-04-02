#include<stdio.h>
#include<conio.h>
void main()
{
float pi,area, r;
pi=3.14;
printf("Enter radius in cm ");
scanf("%f", &r);
area= pi*r*r;
printf("Area of circle is %f sqcm",area);
getch();
}