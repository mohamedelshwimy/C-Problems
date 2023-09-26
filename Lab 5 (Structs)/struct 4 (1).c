#include <stdio.h>
struct student
{
  int rollno;
  char name[50];
  int age;
};
void printStudents(struct student students[], int n, int age);
void StudentsRollNo(struct student students[], int n, int rollno);
void main(void)
{
    int n, age,rollno;
    struct student students[100];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll number of student [%d]: ", i + 1);
        scanf("%d", &students[i].rollno);

        printf("Enter the name of student [%d]: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the age of student [%d]: ", i + 1);
        scanf("%d", &students[i].age);
    }
    printf("Enter the age to filter students: ");
    scanf("%d", &age);
    printStudents(students, n, age);

    printf("Enter the roll number to search: ");
    scanf("%d", &rollno);
    StudentsRollNo(students, n, rollno);

}
void printStudents(struct student students[], int n, int age)
{
    for (int i = 0; i < n; i++)
    {
        if (students[i].age < age)
        {
            printf("Student Roll no.: %d\nStudent Name: %s\nStudent Age: %d\n",students[i].rollno,students[i].name,students[i].age);
        }
    }
}
void StudentsRollNo(struct student students[], int n, int rollno)
{
    for (int i = 0; i < n; i++)
    {
        if (students[i].rollno == rollno)
        {
            printf("Student Roll no.: %d\nStudent Name: %s\nStudent Age: %d\n",students[i].rollno,students[i].name,students[i].age);
            break;
        }
  }
}
