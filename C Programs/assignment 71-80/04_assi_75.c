#include<stdio.h>
void main()
{
    int num1, num2, res;
    system("cls");
    printf("Enter 1st num: ");
    scanf("%d",&num1);
    printf("Enter 2nd num: ");
    scanf("%d",&num2);
    if(num1==num2)
    {
        res=3*(num1+num2);
    }
    else
    {
        res=num1+num2;
    }
    printf("Result= %d",res);
}