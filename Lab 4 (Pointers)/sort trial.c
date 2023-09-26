#include <stdio.h>
#include <string.h>

void sort_names(char names[][20], int n) {
  int i, j;
  char temp[20];

  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (strcmp(names[i], names[j]) > 0) {
        strcpy(temp, names[i]);
        strcpy(names[i], names[j]);
        strcpy(names[j], temp);
      }
    }
  }
}

int main() {
  int n;
  char names[10][20];

  // Get the number of names
  printf("Enter the number of names: ");
  scanf("%d", &n);

  // Get the names
  for (int i = 0; i < n; i++) {
    printf("Enter name %d: ", i + 1);
    scanf("%s", names[i]);
  }

  // Sort the names
  sort_names(names, n);

  // Print the sorted names
  printf("The sorted names are:\n");
  for (int i = 0; i < n; i++) {
    printf("%s\n", names[i]);
  }

  return 0;
}
