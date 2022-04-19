#include <stdio.h>
#include<conio.h>
void main()
{
    int num,i,fact=1;
    system("cls");
    printf("Enter Any Number : ");
    scanf("%d",&num);
    i=num;

    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    } 
    printf("factorial of %d is %d",num,fact);
}