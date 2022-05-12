//matrix multiplication
#include<stdio.h>
void main()
{
    int a[3][3], b[3][3], res[3][3], sum=0, i, j, k;
    system("cls");
    
    printf("Enter elements of 1st matrix \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                sum=sum+(a[i][k]*b[k][j]);
            }
            res[i][j]=sum;
            sum=0;
        }
    }

    printf("Matrix after Multiplication \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",res[i][j]);
        }
    }
}