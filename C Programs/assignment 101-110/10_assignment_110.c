#include<stdio.h>
void main()
{
    int a[3],b[7],i, n=7,j,c=0;
    system("cls");
    printf("Enter elements of array:\n");
    for(i=0; i<3;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<3; i++)
    {
        if(a[i]==5)
        {
            if(a[i+1]==7)
            {
                c=1;
            }
        }
    }

    if(c==1)
    {
        printf("[");
        for(i=0; i<7; i++)
        {
            b[i]=n;
            n--;
            printf("%d ",b[i]);
        }
        printf("]");
    }
    else
    printf("5 follwed by 7 is not present");
    
}