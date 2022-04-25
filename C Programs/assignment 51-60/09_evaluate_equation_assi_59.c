#include<stdio.h>
void main()
{
    int y=1,x,n;
    system("cls");
    printf("Enter value of x ");
    scanf("%d",&x);
    printf("Enter value of n ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        y=y*x;
    }
    printf("y= %d",y);
}