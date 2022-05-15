#include<stdio.h>
void main()
{
    int a[50],n,i,max;
    system("cls");
    printf("Enter size of array(odd number): ");
    scanf("%d",&n);
    if(n>0 && n%2!=0)
    {
        printf("Enter elements of an array:\n");
        for(i=0; i<n; i++)
        {
            printf("a[%d]= ",i);
            scanf("%d",&a[i]);
        }
        max=a[0];
        if(max<a[n/2])
        {
            max=a[n/2];
        }
        if(max<a[n-1])
        {
            max=a[n-1];
        }
        printf("largest value from 1st, last and middle element is %d",max);
    }
    else
    {
        printf("invalid input");
    }
}