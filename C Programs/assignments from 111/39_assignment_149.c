#include<stdio.h>
void main()
{
    int age;
    system("cls");
    printf("Enter age of candidate: ");
    scanf("%d",&age);

    if(age>=18)
    printf("Candidate is eligible to cast vote");
    else
    printf("Candidate is not eligible to cast vote");
}