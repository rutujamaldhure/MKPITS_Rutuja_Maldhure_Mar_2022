#include<stdio.h>
void main()
{
    int num1,num2;
    system("cls");
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    if(num1>=20 && num1<=50 || num2>=20 && num2<=50 )
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}