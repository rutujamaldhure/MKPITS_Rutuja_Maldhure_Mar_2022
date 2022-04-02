#include<stdio.h>
#include<conio.h>
void main()
{
float d, t, v;
printf("Enter displacement in m ");
scanf("%f", &d);
printf("Enter time taken in sec ");
scanf("%f", &t);
v= d/t;
printf("velocity is %f m/s",v);
getch();
}