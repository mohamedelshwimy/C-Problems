#include <stdio.h>
void main(void)
{
    int grade;
    printf("Enter Your Grade : ");
    scanf("%d",&grade);
    if(grade < 50)
        printf("You Failed");
    else if (grade >= 50 && grade <65)
        printf("You Passed");
    else if (grade >= 65 && grade <80)
        printf("Good");
    else if (grade >= 80 && grade < 90)
        printf("Very Good");
    else
        printf("Excellent");
}
