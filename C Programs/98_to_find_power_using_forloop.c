#include<stdio.h>
void main ()
{
    int x,y,i,power=1;
    system("cls");
    printf("Enter value of x and y\n");
    scanf("%d %d",&x,&y);

    for(i=y;i>=1;i--)
    {
        power=power*x;
    }
    printf("%d raised to the power %d is %d",x,y,power);
}