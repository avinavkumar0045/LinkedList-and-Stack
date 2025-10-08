#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"

struct Node *top = NULL;
void Push(int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}
void POP()
{
    if (top == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct Node *temp = top;
    top = top->next;
    free(temp);
}
