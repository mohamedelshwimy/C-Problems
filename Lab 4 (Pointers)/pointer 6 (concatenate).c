#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void concats(char *str1, char *str2, char *result);
void main (void)
{
    char str1[50],str2[50], result[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    concats(str1, str2, result);
    printf("Concatenated string: %s\n", result);
}
void concats(char *str1, char *str2, char *result)
{
    while (*str1) {
        *result = *str1;
        result++;
        str1++;
    }
    while (*str2) {
        *result = *str2;
        result++;
        str2++;
    }
    *result = '\0';
}
