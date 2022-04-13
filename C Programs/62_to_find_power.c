#include<stdio.h>
void main ()
{
    int x,y,i,power=1;
    system("cls");
    printf("Enter value of x and y\n");
    scanf("%d %d",&x,&y);
    i=y;
    while(i>=1)
    {
        power=power*x;
        i--;
    }
    printf("%d raised to the power %d is %d",x,y,power);
}