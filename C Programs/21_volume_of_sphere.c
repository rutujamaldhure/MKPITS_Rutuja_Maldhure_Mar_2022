#include<stdio.h>
#include<conio.h>
void main()
{
float pi, volume, r;
pi=3.14;
printf("Enter radius in cm ");
scanf("%f", &r);
volume= (4/3)*pi*r*r*r;
printf("volume of sphere is %f cucm", volume);
getch();
}