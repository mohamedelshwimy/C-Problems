#include<stdio.h>
#include <string.h>
struct student
{
    char id_num[5];
    char name[10];
    char gender;
    int age;
};
void sort_students(struct student st[], int n);
void main (void)
{
    struct student st[100];
    int size,i,memory_used;
    printf("Enter number of students: ");
    scanf("%d",&size);
    printf("Size of 1 struct = %d\n",sizeof(struct student));
    memory_used = sizeof(struct student) * size;
    printf("Memory used to store information for [%d] students is %d bytes.\n", size,memory_used);
    for(i=0;i<size;i++)
    {
        printf("Enter info for student [%d]: \n",i+1);
        printf("ID_Num: ");
        scanf("%d",&st[i].id_num);
        printf("Name: ");
        fflush(stdin);
        gets(st[i].name);
        printf("Gender: ");
        scanf("%c",&st[i].gender);
        printf("Age: ");
        scanf("%d",&st[i].age);
    }
    sort_students(st,size);
    printf("The sorted names are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s\n", st[i].name);
    }
}
void sort_students(struct student st[], int n)
{
    int i, j;
    struct student temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(st[i].name, st[j].name) > 0)
            {
            temp = st[i];
            st[i] = st[j];
            st[j] = temp;
            }
        }
    }
}
