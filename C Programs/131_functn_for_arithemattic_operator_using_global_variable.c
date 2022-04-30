#include<stdio.h>
int num1,num2;
void add()
{
    int sum;
    sum=num1+num2;
    printf("addition= %d",sum);
}
void sub()
{
    int sub;
    sub=num1-num2;
    printf("\nsubstraction= %d",sub);
}
void mul()
{
    int mul;
    mul=num1*num2;
    printf("\nmultiplication= %d",mul);
}
void div()
{
    int div;
    div=num1/num2;
    printf("\ndivision= %d",div);
}

void main()
{
    system("cls");
    printf("enter 1st num: ");
    scanf("%d",&num1);
    printf("enter 2nd num: ");
    scanf("%d",&num2);
    add();
    sub();
    mul();
    div();
}