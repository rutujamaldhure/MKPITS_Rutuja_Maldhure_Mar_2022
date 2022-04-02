#include<stdio.h>
#include<conio.h>
void main()
{
float m,v,e;
printf("Enter mass in kg ");
scanf("%f", &m);
printf("Enter velocity in m/s ");
scanf("%f",&v);
e= 0.5*m*v*v;
printf("Kinetic Energy is %f J",e);
getch();
}