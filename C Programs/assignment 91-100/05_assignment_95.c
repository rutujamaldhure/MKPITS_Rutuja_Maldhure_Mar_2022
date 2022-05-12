#include<stdio.h>
void main()
{
    int num;
    system("cls");
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%10==8 || num%10==9 || num%10==1 || num%10==2)
    printf("%d is within 2 of multiple of 10",num);
    else
    if(num%10==0)
    printf("%d is multiple of 10",num);
    else
    printf("%d is not within 2 of multiple of 10",num);
}