#include <stdio.h>

#define MAX_SIZE 100

void separateOddEven(int arr[], int size, int odd[], int even[], int *oddSize, int *evenSize) {
    *oddSize = 0;
    *evenSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even[*evenSize] = arr[i];
            (*evenSize)++;
        } else {
            odd[*oddSize] = arr[i];
            (*oddSize)++;
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int odd[MAX_SIZE], even[MAX_SIZE];
    int size, oddSize, evenSize;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    separateOddEven(arr, size, odd, even, &oddSize, &evenSize);

    printf("\nOdd elements: ");
    for (int i = 0; i < oddSize; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nEven elements: ");
    for (int i = 0; i < evenSize; i++) {
        printf("%d ", even[i]);
    }

    return 0;
}
