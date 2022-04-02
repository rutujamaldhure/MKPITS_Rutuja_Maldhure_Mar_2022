#include<stdio.h>
#include<conio.h>
void main()
{
int length, breadth, area;
printf("Enter length in cm ");
scanf("%d", &length);
printf("Enter breadth in cm ");
scanf("%d", &breadth);
area=length*breadth;
printf("Area of Rectangle is %d sqcm", area);
getch();
}