/*  
4 4 4 4 4 4 4  
4 3 3 3 3 3 4   
4 3 2 2 2 3 4   
4 3 2 1 2 3 4   
4 3 2 2 2 3 4   
4 3 3 3 3 3 4   
4 4 4 4 4 4 4  
TO PRINT THIS TYPE OF PATTERN
Divide this pattern into 4 differnt parts and then apply the logic

upper left part    upper right part
  4 4 4 4               4 4 4
  4 3 3 3               3 3 4
  4 3 2 2               2 3 4
  4 3 2 1               2 3 4

lower left part     lower right part
  4 3 2 2               2 3 4
  4 3 3 3               3 3 4
  4 4 4 4               4 4 4

*/

/*ALGORITHM
1. Take input from user.
2. Check if entered number is positive integer or not
3. Logic to print pattern 
4. print result
4. Stop
*/

#include<stdio.h>
void main()
{
    int i,j,n;
    system("cls");
    printf("Enter number- ");
    scanf("%d",&n);

    if(n>0)
    {
    
        for(i=n; i>=1; i--)
        {
            //for upper left part
            for(j=n; j>=1; j--)
            {
                if(j>=i)
                printf("%d ",j);
                if(j<i)
                printf("%d ", i);

            }

            //for upper right part
            for(j=2; j<=n; j++)
            {
                if(j>=i)
                printf("%d ", j);
                if(j<i)
                printf("%d ", i);
            }
            printf("\n");
        }

        
        for(i=2; i<=n; i++)
        {
            //for lower left part
            for(j=n; j>=1; j--)
            {
                if(j>=i)
                printf("%d ",j);
                if(j<i)
                printf("%d ", i);

            }

            //for lower right part
            for(j=2; j<=n; j++)
            {
                if(j>=i)
                printf("%d ", j);
                if(j<i)
                printf("%d ", i);
            }
        
            printf("\n");
        }
    }
    else
    printf("Invalid Input \nplease run again and enter positive integer");
}
