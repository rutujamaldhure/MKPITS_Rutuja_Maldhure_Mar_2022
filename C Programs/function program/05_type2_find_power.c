#include<stdio.h>
void power (int a, int b)
{
    int i,power=1;

    for(i=b;i>=1;i--)
    {
        power=power*a;
    }
    printf("%d raised to the power %d is %d",a,b,power);
}
void main()
{
    int x, y;
    system("cls");
    printf("Enter value of x and y\n");
    scanf("%d %d",&x,&y);
    power(x,y);
}