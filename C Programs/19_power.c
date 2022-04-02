#include<stdio.h>
#include<conio.h>
void main()
{
int p,i,r;
printf("Enter current in A ");
scanf("%d", &i);
printf("Enter resistance in ohm ");
scanf("%d",&r);
p=i*i*r;
printf("Power required is %d watt",p);
getch();
}