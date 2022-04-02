#include<stdio.h>
#include<conio.h>
void main()
{
int v,i,r;
printf("Enter current in A ");
scanf("%d", &i);
printf("Enter resistance in ohm ");
scanf("%d",&r);
v=i*r;
printf("voltage required is %d V",v);
getch();
}