#include<stdio.h>
void main()
{
    int x=51, n,res;
    system("cls");
    printf("Enter value of n: ");
    scanf("%d",&n);
    if(n<51)
    {
        res=x-n;
    }
    else
    {
        res=3*(n-x);
    }
    printf("result= %d",res);
}