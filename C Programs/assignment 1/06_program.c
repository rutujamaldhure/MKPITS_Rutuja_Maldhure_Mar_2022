//write a program to compute the perimeter and area of a circle with radius of 6 inches.
#include<stdio.h>
#include<conio.h>
void main()
{
float r=6, area, perimeter, pi=22/7;
area=pi*r*r;
perimeter=2*pi*r;
printf("Area of %f inch circle is %f sq.inch \nPerimeter of %f inch circle is %f inch",r, area, r, perimeter);
getch();
}