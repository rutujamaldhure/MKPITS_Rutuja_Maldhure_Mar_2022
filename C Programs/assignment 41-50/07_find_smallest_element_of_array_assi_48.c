#include<stdio.h>
void main()
{
    int num[6],i, min,position;
    system("cls");
    printf("Enter any 6 numbers- \n");
    for(i=0; i<6; i++)
    {
        printf("num[%d]= ",i);
        scanf("%d",&num[i]);
    }

    min=num[0];
    
    for(i=1; i<6; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
            position=i+1;
        }      
    }

    printf("smallest element is %d at position %d", min,position);
}