#include<stdio.h>
#include<conio.h>
void main()
{
float m,g,h,e;
g = 9.8;
printf("Enter mass in kg ");
scanf("%f", &m);
printf("Enter height in m ");
scanf("%f",&h);
e= m*g*h;
printf("Kinetic Energy is %f J",e);
getch();
}