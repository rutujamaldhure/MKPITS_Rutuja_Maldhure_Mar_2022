#include<stdio.h>
void main()
{
    int a[50], n, i,c=0;
    system("cls");
    printf("Enter length of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]==5 || a[i]==7)
        c=c+1;
    }

    if(c>0)
    printf("Array contain 5's or 7's");
    else
    printf("Array does not contain 5's or 7's");

}