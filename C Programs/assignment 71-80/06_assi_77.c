#include<stdio.h>
void main()
{
    int x,y,sum;
    system("cls");
    printf("Enter 1st value: ");
    scanf("%d", &x);
    printf("Enter 2nd value: ");
    scanf("%d",&y);
    sum=x+y;
    if(x==30 || y==30 || sum==30)
    {
        printf("sum= %d\nresult= True",sum);
    }
    else
    printf("sum= %d\nresult= False",sum);

}