#include<stdio.h>
#include<conio.h>
void main()
{
float mass, acc, force;
printf("enter mass");
scanf("%f",&mass);
printf("enter accelration");
scanf("%f",&acc);
force = mass * acc;
printf("force is %f",force);
getch();
}