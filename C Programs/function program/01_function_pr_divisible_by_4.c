#include<stdio.h>
void divby4();
void main()
{
    system("cls");
    divby4();
}
void divby4()
{
int num, r;
printf("Enter number ");
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
}