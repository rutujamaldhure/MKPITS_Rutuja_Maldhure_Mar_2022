//Write a program to compute the perimeter and the area of a rectangle with a height of 7inches and width of 5 inches.
#include<stdio.h>
#include<conio.h>
void main()
{
    int ht=7 , b=5, area, perimeter;
    area= ht*b;
    perimeter=2*(ht+b);
    printf("Area of rectangle is %d sq.inch\nperimeterof rectangle is %d inch",area, perimeter);
    getch();
    
}