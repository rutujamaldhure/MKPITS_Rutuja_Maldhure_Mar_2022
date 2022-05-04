#include<stdio.h>
int power (int a, int b)
{
    int i,power=1;

    for(i=b;i>=1;i--)
    {
        power=power*a;
    }
    return power;
}
void main()
{
    int x, y,r;
    system("cls");
    printf("Enter value of x and y\n");
    scanf("%d %d",&x,&y);
    r=power(x,y);
    printf("%d raised to the power %d is %d",x,y,r);
}