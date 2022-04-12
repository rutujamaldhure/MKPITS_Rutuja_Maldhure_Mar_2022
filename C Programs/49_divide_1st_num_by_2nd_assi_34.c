#include<stdio.h>
void main ()
{
    float num1, num2, div;
    system("cls");
    printf("Enter 1st  number\n");
    scanf("%f", &num1);
    printf("Enter 2nd number\n");
    scanf("%f", &num2);
    if(num2==0)
    {
        printf("Division is not possible");
    }
    else
    {
        div=num1/num2;
        printf("%f divided by %f is %.2f", num1, num2, div);
    }
}