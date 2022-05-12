#include<stdio.h>
void main ()
{
    int a[50],s,i,beg,end,m,flag=0;
    system("cls");
    printf("enter size of array: ");
    scanf("%d",&end);
    printf("Enter elements of array\n");
    for(i=0; i<end; i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("Enter number you want to search- ");
    scanf("%d",&s);

    for(beg=0;beg<end;beg++)
    {
        while(beg<=end)
        {
            m=(beg+end)/2;
            if(a[m]==s)
            {
                flag=1;
                break;
            }

            if(a[m]>s)
            {
                end=m-1;
            }

            if(a[m]<s)
            {
                beg=m+1;
            }
        }
    }

    if(flag==1)
    printf("Number is present");
    else
    printf("Number not found");
}
