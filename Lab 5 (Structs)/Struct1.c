#include<stdio.h>
struct student
{
    int code;
    char name[50];
    char gender[10];
    int age;
};
void main (void)
{
    struct student st[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter info for student [%d]: \n",i+1);
        printf("Code: ");
        scanf("%d",&st[i].code);
        printf("Name: ");
        fflush(stdin);
        gets(st[i].name);
        printf("Gender: ");
        gets(st[i].gender);
        printf("Age: ");
        scanf("%d",&st[i].age);
    }
    if(st[0].age > st[1].age)
        printf("The eldest student is student 1");
    else
        printf("The eldest student is student 2");
}
