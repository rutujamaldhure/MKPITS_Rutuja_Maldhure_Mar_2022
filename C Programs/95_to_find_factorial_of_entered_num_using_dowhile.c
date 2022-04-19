#include <stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact=1;
    system("cls");
    printf("Enter Any Number : ");
    scanf("%d",&num);
    i=num;

    do
    {
        fact=fact*i;
        i--;
    } while(i>=1);
    printf("factorial of %d is %d",num,fact);
}