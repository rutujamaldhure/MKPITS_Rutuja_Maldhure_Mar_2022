#include<stdio.h>
int mulof3(int a)
{
    int res;
    res=a%3;
    return res;
}

int mulof7(int x)
{
    int res;
    res=x%7;
    return res;
}

void main()
{
    int num,r1,r2;
    system("cls");
    printf("Enter any number: ");
    scanf("%d",&num);
    r1=mulof3(num);
    r2=mulof7(num);
    if(r1!=0 && r2==0)
    printf("%d is multiple of 7",num);
    else
    if(r1==0 && r2!=0)
    printf("%d is multiple of 3",num);
    else
    printf("0");
}