#include<stdio.h>
#include<conio.h>
void main ()
{
int base, height, area;
printf("Enter base of triangle in cm ");
scanf("%d", &base);
printf("Enter height of triangle in cm ");
scanf("%d", &height);
area = 0.5*base*height;
printf("Area of triangle is %d sqcm",area);
getch();
}