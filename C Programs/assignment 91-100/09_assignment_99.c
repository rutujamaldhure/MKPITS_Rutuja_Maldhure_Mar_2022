//wap to find the larger from two given integer. however if the two integer have same 
//remainder when divided by 5 then return smaller integer. if two integers are same return 0.
#include<stdio.h>
void main()
{
    int a,b,r1,r2;
    system("cls");
    printf("Enter 1st integer: ");
    scanf("%d",&a);
    printf("Enter 2nd integer: ");
    scanf("%d",&b);
    r1=a%5;
    r2=b%5;
    if(a==b)
    {
        printf("0");
    }
    else 
    if (r1==r2)
    {
        if(a>b)
        printf("smaller integer= %d",b);
        else
        printf("smaller integer= %d",a);
    }
    else
    {
        if(a>b)
        printf("larger integer= %d",a);
        else
        printf("larger integer= %d",b);
    }
    
}