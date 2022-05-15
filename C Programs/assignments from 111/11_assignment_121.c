#include<stdio.h>
void main()
{
    int a[50], n, i,c=0;
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
        if(a[i]==5 && a[i+1]==5)
        c=c+1;
    }
    if(c>0)
    printf("5 next to 5 is present in array");
    else
    printf("5 next to 5 is not present in array");
}
