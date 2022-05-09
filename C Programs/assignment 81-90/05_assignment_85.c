#include<stdio.h>
void main()
{
    int num1,num2, r1, r2;
    system("cls");
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    if (num1>=40 && num1<=50 && num2>=40 && num2<=50)
    printf("Entered number are in the range 40 to 50");
    
    if (num1>=50 && num1<=60 && num2>=50 && num2<=60)
    printf("Entered number are in the range 50 to 60");
}