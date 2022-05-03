#include<stdio.h>
void main()
{
    int r;
    system("cls");
    r=fun();
    if(r==1)
    printf("Entered number is divisible by 4");
    else
    printf("Entered number is not divisible by 4");
}

int fun()
{
    int num,res;
    printf("Enter any number ");
    scanf("%d",&num);
    res=num%4;
    if(res==0)
    return 1;
    else
    return 0;
    
}