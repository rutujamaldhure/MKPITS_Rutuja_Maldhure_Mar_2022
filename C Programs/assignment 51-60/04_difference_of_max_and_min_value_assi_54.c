#include<stdio.h>
void main()
{
    int num[4],min,max,diff;
    system("cls");
    printf("Enter any 4 numbers \n");
    for(int i=0; i<4; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }
    min=num[0];
    max=num[0];
    for(int i=0; i<4; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
        if(num[i]>max)
        {
            max=num[i];
        }
    }

    diff=max-min;
    printf("difference of max value and min value= %d",diff);
}