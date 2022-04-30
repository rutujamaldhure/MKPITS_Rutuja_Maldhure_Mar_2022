#include<stdio.h>
void add()
{
    int num1,num2,sum;
    printf("enter 1st num: ");
    scanf("%d",&num1);
    printf("enter 2nd num: ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("addition= %d",sum);
}
void main()
{
    system("cls");
    add();
}