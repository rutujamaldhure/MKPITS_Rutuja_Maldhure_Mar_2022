#include<stdio.h>
#include<conio.h>
void main()
{
int f,s,w;
printf("Enter force in N ");
scanf("%d", &f);
printf("Enter displacement in m ");
scanf("%d",&s);
w=f*s;
printf("work done is %d Nm",w);
getch();
}