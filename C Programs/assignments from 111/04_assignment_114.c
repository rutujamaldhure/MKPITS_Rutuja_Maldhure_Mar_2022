#include<stdio.h>
void main()
{
    int a[20],b[20],n,i, temp;
    system("cls");
    printf("Enter length of array: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            b[n-1]=a[i];
        }
        else
        if(i==n-1)
        {
            b[0]=a[n-1];
        }
        else
        {
            b[i]=a[i];
        }
    }

    printf("array after swapping first and last element:\n");
    for(i=0; i<n; i++)
    {
        printf("b[%d]= %d\n",i,b[i]);
    }
}