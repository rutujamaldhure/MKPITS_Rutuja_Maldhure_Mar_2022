#include<stdio.h>
void main ()
{
    int num[6], i, j,temp;
    system("cls");
    printf("Enter any 6 numbers- \n");
    for(i=0;i<6;i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<=2;i++)
    {   
        temp=num[i];
        num[i]=num[5-i];
        num[5-i]=temp;
    }
    printf("Elements of an array = ");
    for(i=0;i<6;i++)
    {
        printf("%d ", num[i]);
    }
}
