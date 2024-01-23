#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

bool is_empty(){
    return top == -1;
}

bool is_full(){
    return top == MAX_SIZE - 1;
}

void push(int ele){
    if (is_full())
    {
        printf("Stack is full. Cannot push element.\n");
    }
    else
    {
        stack[++top] = ele;
        printf("%d pushed into the stack.\n", ele);
    }    
}

void pop(){
    if (is_empty())
    {
        printf("Stack is empty. Cannot pop element.\n");
    }
    else
    {
        printf("%d deleted from stack.\n", stack[top--]);
    }
}

void display() {
    if (is_empty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int option, element;

    while (1) {
        printf("\nMain Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. IsEmpty\n");
        printf("4. IsFull\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter element to be pushed into the stack: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                if (is_empty()) {
                    printf("Stack empty: True\n");
                } else {
                    printf("Stack empty: False\n");
                }
                break;
            case 4:
                if (is_full()) {
                    printf("Stack full: True\n");
                } else {
                    printf("Stack full: False\n");
                }
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid option. Please choose a valid option.\n");
        }
    }

    return 0;
}
