#include<stdio.h>
void main()
{
    int num1,num2,num3;
    system("cls");
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    printf("Enter 3rd number: ");
    scanf("%d", &num3);
    if(num1>=20 && num1<=50 || num2>=20 && num2<=50 || num3>=20 && num3<=50)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}