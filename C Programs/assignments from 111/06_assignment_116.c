#include<stdio.h>
int num1,num2;
int add()
{
    int add;
    add=num1+num2;
    return add;
}

int sub()
{
    int sub;
    sub=num1-num2;
    return sub;
}

int mul()
{
    int mul;
    mul=num1*num2;
    return mul;
}

int div()
{
    int div;
    div=num1/num2;
    return div;
}

void main()
{
    int a,s,m,d;
    system("cls");
    printf("Enter 1st num: ");
    scanf("%d",&num1);
    printf("Enter 2nd num: ");
    scanf("%d",&num2);

    a=add();
    s=sub();
    m=mul();
    d=div();
    printf("\n\nAddition      = %d\nSubstraction  = %d\nMultiplication= %d\nDivision      = %d",a,s,m,d);
}