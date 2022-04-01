#include<stdio.h>
#include<conio.h>
void main()
{
int num, r;
printf("enter number ");
scanf("%d",&num);
r = num % 4;
if(r==0)
{
    printf("%d is divisible by 4",num);
}
if(r!=0)
{
    printf("%d is not divisible by 4", num);
}
getch();
}