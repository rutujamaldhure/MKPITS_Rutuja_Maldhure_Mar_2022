#include<stdio.h>
void divby4();
void fun();
void main()
{
    system("cls");
    fun();
    
}
void fun()
{
    int num, r;
    printf("Enter number ");
    scanf("%d",&num);
    divby4(num);
}
void divby4(int x)
{
int r;
r = x % 4;
if(r==0)
{
    printf("%d is divisible by 4",x);
}
if(r!=0)
{
    printf("%d is not divisible by 4", x);
}
}