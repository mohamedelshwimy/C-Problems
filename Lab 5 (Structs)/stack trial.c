#include <stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();

int main() {
    int choice, item;

    do {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to push: ");
                scanf("%d", &item);
                push(item);
                break;
            case 2:
                if (!isEmpty()) {
                    item = pop();
                    printf("Popped item: %d\n", item);
                } else {
                    printf("Stack is empty.\n");
                }
                break;
            case 3:
                if (!isEmpty()) {
                    item = peek();
                    printf("Top item: %d\n", item);
                } else {
                    printf("Stack is empty.\n");
                }
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        printf("\n");
    } while (choice != 4);

    return 0;
}

void push(int item) {
    if (isFull()) {
        printf("Stack overflow. Cannot push item.\n");
    } else {
        top++;
        stack[top] = item;
        printf("Pushed item: %d\n", item);
    }
}

int pop() {
    int item;
    if (isEmpty()) {
        printf("Stack underflow. Cannot pop item.\n");
        return -1;
    } else {
        item = stack[top];
        top--;
        return item;
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return -1;
    } else {
        return stack[top];
    }
}

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX_SIZE - 1;
}
