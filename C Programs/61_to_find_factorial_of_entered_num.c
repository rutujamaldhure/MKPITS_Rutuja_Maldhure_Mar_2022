#include <stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact=1;
    system("cls");
    printf("Enter Any Number : ");
    scanf("%d",&num);
    i=num;

    while(i>=1)
    {
        fact=fact*i;
        i--;
    }
    printf("factorial of %d is %d",num,fact);
}