#include<stdio.h>
void main()
{
    int a[50],n,i, b[3];
    system("cls");
    printf("Enter length of an array: ");
    scanf("%d",&n);
    if(n>=3)
    {
        printf("Enter elements of array: \n");
        for(i=0; i<n; i++)
        {
            printf("a[%d]= ",i);
            scanf("%d", &a[i]);
        }

        b[0]=a[(n/2)-1];
        b[1]=a[n/2];
        b[2]=a[(n/2)+1];

        printf("new array: ");
        for(i=0; i<3; i++)
        {
            printf("b[%d]=%d  ",i,b[i]);
        }
    }
    else
    {
        printf("invalid input");
    }
}