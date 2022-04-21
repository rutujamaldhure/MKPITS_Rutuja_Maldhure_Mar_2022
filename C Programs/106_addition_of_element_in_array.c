#include<stdio.h>
void main()
{
    int num[5], i, sum =0 ;
    system("cls");
    printf("Enter any 5 numbers-\n");
    for(i=0; i<5; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }
   
    for(i=0; i<5; i++)
    {
        sum=sum+num[i];
    }
    printf("Addition of all elements = %d ",sum);

}