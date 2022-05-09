#include<stdio.h>
struct student
{
    int id;
    char name[20];
};
void main()
{
    int i;
    struct student s[4];
    system("cls");
    for(i=0; i<4; i++)
    {
        printf("Enter student id: ");
        scanf("%d",&s[i].id);
        printf("Enter student name: ");
        scanf("%s",s[i].name);
    }
    for(i=0; i<4; i++)
    {
        printf("\nStudent id= %d",s[i].id);
        printf("\nStudent name=%s",s[i].name);
    }
}
