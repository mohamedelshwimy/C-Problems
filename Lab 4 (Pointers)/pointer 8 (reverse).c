#include <stdio.h>
#include <string.h>
void reverse_str(char* str);
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse_str(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
void reverse_str(char* str)
{
    int length = strlen(str);
    char* start = str;
    char* end = str + length - 1;

    while (start < end)
        {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
        }
}
