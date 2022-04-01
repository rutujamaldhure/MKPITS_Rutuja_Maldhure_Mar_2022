#include<stdio.h>
#include<conio.h>
void main()
{
int side , volume;
printf("Enter side of cube in cm ");
scanf("%d",&side);
volume= side*side*side;
printf("volume of cube is %d cucm", volume);
getch();
}