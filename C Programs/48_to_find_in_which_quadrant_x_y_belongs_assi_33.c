#include<stdio.h>
void main()
{
    int x,y;
    system("cls");
    printf("Enter value of x-coordinate\n");
    scanf("%d",&x);
    printf("Enter value of y-coordinate\n");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
        printf("co-ordinates(%d,%d) lies in 1st quadrant",x,y);
    }
    else
    if(x>0 && y<0)
    {
        printf("co-ordinates(%d,%d) lies in 2nd quadrant",x,y);
    }
    else
    if(x<0 && y<0)
    {
        printf("co-ordinates(%d,%d) lies in 3rd quadrant",x,y);
    }
    else
    {
        printf("co-ordinates(%d,%d) lies in 4th quadrant",x,y);
    }


}