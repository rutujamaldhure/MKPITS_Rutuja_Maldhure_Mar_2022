#include<stdio.h>
void main()
{
    int arr[50],i,x,choice,n,pos;
    system("cls");
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("enter elements of array\n");
    for(i=0; i<n; i++)
    {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("press 1 to insert at top");
    printf("\npress 2 to insert at any position");
    printf("\npress 3 to insert at bottom\n");
    scanf("%d",&choice);
    printf("enter element to insert ");
    scanf("%d",&x);
    if(choice==1)
    {
        for(i=n+1; i>=0; i--)
        {
           
            if(i==0)
            arr[i]=x;
            else
            arr[i]=arr[i-1];
        }
    }
    else
    if(choice==2)
    {
        printf("Enter position u want to insert: ");
        scanf("%d",&pos);
        for(i=n+1; i>=0; i--)
        {
            if(i==pos-1)
            arr[i]=x;
            else
            if(i>pos-1)
            arr[i]=arr[i-1];
            else
            arr[i]=arr[i];
        } 
    }
    else
    if(choice==3)
    {
        for(i=0; i<n+1; i++)
        {
            if(i==n)
            arr[i]=x;
        }
    }
    else
    printf("invalid input");
    printf("array after insertion\n");
    for(i=0; i<n+1; i++)
    {
        printf("arr[%d]=%d\n",i,arr[i]);
    }
}