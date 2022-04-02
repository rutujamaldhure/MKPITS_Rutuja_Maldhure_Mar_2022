#include<stdio.h>
#include<conio.h>
void main ()
{
int length, breadth ,height,volume;
printf("enter length of cube in cm ");
scanf("%d",&length);
printf("enter breadth of cube in cm ");
scanf("%d",& breadth);
printf("enter height of cube in cm ");
scanf("%d",&height);
volume = length * breadth *height;
printf("volume of cuboid is %d cucm", volume);
getch();

}