#include<stdio.h>
void main()
{
    int num,r;
    system("cls");
    printf("Enter any number ");
    scanf("%d",&num);
    r=fun(num);
    if(r==0)
    printf("%d is divisible by 4",num);
    else
    printf("%d is not divisible by 4",num);
}

int fun(int x)
{
    int res;
    res=x%4;
    return res;
}