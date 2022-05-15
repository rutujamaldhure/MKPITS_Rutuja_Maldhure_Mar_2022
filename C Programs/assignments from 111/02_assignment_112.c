#include<stdio.h>
void main()
{
    int a[50],b[2],i,n;
    system("cls");
    printf("Enter length of array(length must be even): ");
    scanf("%d",&n);
    printf("Enter elements of array:\n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    b[0]=a[(n/2)-1];
    b[1]=a[n/2];
    printf("new array having middle elements- ");
    for(i=0; i<2; i++)
    {
        printf("b[%d]=%d  ",i,b[i]);
    }
}