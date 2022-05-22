#include<stdio.h>
void main()
{
    int n,m;
    system("cls");
    printf("Enter value of m: ");
    scanf("%d",&m);

    if(m>0)
    n=1;
    else
    if(m==0)
    n=0;
    else
    if(m<0)
    n=-1;

    printf("value of n is %d",n);

}