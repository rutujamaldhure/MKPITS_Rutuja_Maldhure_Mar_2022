#include<stdio.h>
void main()
{
    int num;
    system("cls");
    printf("Enter number: ");
    scanf("%d",&num);
    if(num>0)
    {
        if(num%13==0)
        printf("%d is multiple of 13",num);
        else
        if(num%13==1)
        printf("%d is one more than multiple of 13",num);
        else
        printf("%d is not multiple of 13",num);
    }
    else
    printf("invalid input");
}