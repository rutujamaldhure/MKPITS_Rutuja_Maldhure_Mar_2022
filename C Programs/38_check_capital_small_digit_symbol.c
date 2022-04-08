#include<stdio.h>
#include<conio.h>
void main ()
{
    char ch;
    system("cls");
    printf("Enter any character ");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    {
        printf("Entered character is Alphabet in UPPER CASE");
    }
    else
    if(ch>=97 && ch<=122)
    {
        printf("Entered character is Alphabet in LOWER CASE");
    }
    else
    if(ch>=48 && ch<=57)
    {
        printf("Entered character is Digit");
    }
    else
    {
        printf("Entered character is Symbol");
    }
}