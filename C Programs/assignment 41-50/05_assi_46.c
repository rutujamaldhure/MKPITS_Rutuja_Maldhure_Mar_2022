#include<stdio.h>
void main ()
{
    int num[5], i ,n=0;
    system("cls");
    printf("Enter any 5 numbers- \n");
    for(i=0;i<5;i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }
    printf("Elements of an array less than 5 are \n");
    for(i=0;i<5;i++)
    {
        if(num[i]<5)
        {
            printf("num[%d]= %d \n",i,num[i]);
            n=n+1;
        }
    }
    if(n==0)
    printf("No element found");
}