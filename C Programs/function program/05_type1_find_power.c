#include<stdio.h>
void power()
{
    int x,y,i,power=1;
    printf("Enter value of x and y\n");
    scanf("%d %d",&x,&y);

    for(i=y;i>=1;i--)
    {
        power=power*x;
    }
    printf("%d raised to the power %d is %d",x,y,power);
}
void main()
{
    system("cls");
    power();
}