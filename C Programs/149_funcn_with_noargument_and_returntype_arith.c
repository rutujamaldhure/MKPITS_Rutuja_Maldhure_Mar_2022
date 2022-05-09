#include<stdio.h>
int num1,num2;
int add()
{
    int sum;
    sum=num1+num2;
    return sum;
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
    int sum,s,m,d;
    system("cls");
    printf("enter 1st num: ");
    scanf("%d",&num1);
    printf("enter 2nd num: ");
    scanf("%d",&num2);
    sum=add();
    s=sub();
    m=mul();
    d=div();
    printf("\naddition= %d",sum);
    printf("\nsubstraction= %d",s);
    printf("\nmultiplication= %d",m);
    printf("\ndivision= %d",d);
}