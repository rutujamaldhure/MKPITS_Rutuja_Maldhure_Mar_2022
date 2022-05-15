#include<stdio.h>
void main()
{
    int a[50],n,i,sum=0;
    system("cls");
    printf("Enter lenght of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        if(a[i]!=17)
        sum=sum+a[i];
    }
    printf("Sum of all values except 17= %d",sum);
}