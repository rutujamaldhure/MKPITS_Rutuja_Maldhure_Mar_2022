#include<stdio.h>
void main ()
{
    int num[5],i,j,temp;
    system("cls");
    printf("Enter any 5 numbers \n");
    for(i=0; i<5; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("Numbers after sorting- ");

    for(i=0; i<5; i++)
    {
        printf("%d ",num[i]);
    }
}