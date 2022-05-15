#include<stdio.h>
void main()
{
    int a[50],n,i,count=0;
    system("cls");
    printf("Enter length of an array: ");
    scanf("%d",&n);
    printf("Enter elements of an array: \n");
    for(i=0; i<n; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        count=count+1;
    }

    printf("Total number of even elements= %d",count);

}