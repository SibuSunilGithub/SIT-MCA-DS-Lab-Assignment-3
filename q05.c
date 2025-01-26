// Wap to implement various operation of stack using structure.

#include <stdio.h>
#include <stdlib.h>
#define size 5

struct Stack
{
    int stack[size];
    int top;
};
typedef struct Stack stack;

// Function Initialization
int pop(stack *p);
void push(stack *p, int ele);
void display(stack *p);

// Main Function
int main()
{
    stack s;
    s.top = -1;
    int choice, ele;
    printf("\nOperation Of Stack Using Structure\n\n");
    while (1)
    {
        printf("Enter 1 For Push\n");
        printf("Enter 2 For Pop\n");
        printf("Enter 3 For Display\n");
        printf("Enter 0 For Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Element: ");
            scanf("%d", &ele);
            push(&s, ele);
            printf("\n");
            break;
        case 2:
            ele = pop(&s);
            printf("%d Will Be Deleted From The Stack.\n", ele);
            break;
        case 3:
            printf("Stack Elements Are: ");
            display(&s);
            printf("\n");
            break;
        case 0:
            exit(0);
        default:
            printf("Invalid Choice!\n");
            break;
        }
    }
}

// Push Function
void push(stack *p, int ele)
{
    if (p->top == size - 1)
    {
        printf("Stack Overflow!\n");
        exit(1);
    }
    p->top = p->top + 1;
    p->stack[p->top] = ele;
    return;
}

// Pop Operation
int pop(stack *p)
{
    if ((p->top) == -1)
    {
        printf("Stack Is Empty.\n");
        exit(0);
    }
    int ele = p->stack[p->top];
    p->top = (p->top) - 1;
    return ele;
}

// Display
void display(stack *p)
{
    if (p->top == -1)
    {
        printf("Stack Is Empty!\n");
        exit(0);
    }
    for (int i = p->top; i >= 0; i--)
    {
        printf("%d ", p->stack[i]);
    }
}