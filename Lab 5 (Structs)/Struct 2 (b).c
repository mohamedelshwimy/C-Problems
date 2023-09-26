#include<stdio.h>
struct student
{
    char id_num[5];
    char name[10];
    char gender;
    int age;
};
void main (void)
{
    struct student *st[100];
    int size,i,memory_used;
    for (i = 0; i < 100; i++)
    {
    st[i] = (struct student *)malloc(sizeof(struct student));
    }
    printf("Enter number of students: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter info for student [%d]: \n",i+1);
        printf("ID_Num: ");
        scanf("%d",&st[i]->id_num);
        printf("Name: ");
        fflush(stdin);
        gets(st[i]->name);
        printf("Gender: ");
        scanf("%c",&st[i]->gender);
        printf("Age: ");
        scanf("%d",&st[i]->age);
    }
    printf("Size of 1 struct = %d\n",sizeof(struct student));
    memory_used = sizeof(struct student) * size;
    printf("Memory used to store information for [%d] students is %d bytes.\n", size,memory_used);
}
