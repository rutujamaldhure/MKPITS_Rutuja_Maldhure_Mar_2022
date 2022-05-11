#include<stdio.h>
union student
{
    int id;
    char Name[20];
}s1;
void main ()
{
    system("cls");
    printf("Enter student id: ");
    scanf("%d",&s1.id);
    printf("student id= %d",s1.id);
    printf("\nEnter student Name: ");
    scanf("%s",s1.Name);
    printf("student name= %s",s1.Name);
}