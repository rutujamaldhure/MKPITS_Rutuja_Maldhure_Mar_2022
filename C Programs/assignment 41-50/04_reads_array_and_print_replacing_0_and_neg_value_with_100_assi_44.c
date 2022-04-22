#include<stdio.h>
void main ()
{
    int num[7], i;
    system("cls");
    printf("Enter any 7 numbers- \n");
    for(i=0;i<7;i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }
    printf("Elements of an array= ");
    for(i=0;i<7;i++)
    {
        if(num[i]<=0)
        num[i]=100;
        printf("%d ",num[i]);
    }
}