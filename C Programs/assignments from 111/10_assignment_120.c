#include<stdio.h>
void main()
{
    int a[50], n, i, sum=0;
    system("cls");
    printf("Enter lenght of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if(a[i]==5 && a[i+1]==6)
        {
            sum=sum+0;
        }
        else
        if(a[i]==6 && a[i-1]==5)
        {
            sum=sum+0;
        }
        else
        sum=sum+a[i];
    }
    printf("sum of all values= %d",sum);
}