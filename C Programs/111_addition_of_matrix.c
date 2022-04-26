#include<stdio.h>
void main()
{
    int a[2][2], b[2][2], res[2][2];
    system("cls");
    
    printf("Enter elements of 1st matrix \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            res[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix after Addition \n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",res[i][j]);
        }
    }
}