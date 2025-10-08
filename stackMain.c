
#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


extern struct Node *top;

void display() {
    if (top == NULL) {
        printf(" empty stack \n");
        return;
    }
    struct Node *temp = top;
    printf("Stack elements from Top to bottom : ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main() {
    int choice, val;

    while (1) {
        printf("\n What you want to perform \n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                Push(val);

                printf("Pushed %d\n", val);
                break;
            case 2:
                POP();
                printf("Popped top element\n");
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting\n");
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}


