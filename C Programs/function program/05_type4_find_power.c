#include<stdio.h>
int power()
{
    int x,y,power=1,i;
    printf("Enter values of x and y\n");
    scanf("%d %d",&x,&y);
    for(i=y;i>=1;i--)
    {
        power=power*x;
    }
    printf("%d raised to power %d is",x,y);
    return power;
}
void main()
{
    int r;
    system("cls");
    r=power();
    printf(" %d ",r);
}