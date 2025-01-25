// Wap to implement various operations of stack...

#include <stdio.h>
#include <stdlib.h>
#define size 100

void push(int arr[], int ele);
int pop(int arr[]);
void display(int arr[]);

int top;

int main()
{
    int stack[size], choice, ele;
    top = -1;
printf("\n***********Operations On Stack***********\n\n");
    while (1)
    {
        printf("Enter 1 For Push\n");
        printf("Enter 2 For Pop\n");
        printf("Enter 3 For Display\n");
        printf("Enter 4 For Exit\n");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter The Element To Push On Stack: ");
            scanf("%d", &ele);
            push(stack, ele);
            printf("\n");
            break;
        case 2:
            ele = pop(stack);
            printf("Deleted ELement Is: %d\n", ele);
            printf("\n");
            break;
        case 3:
            printf("Stack Elements Are: ");
            display(stack);
            printf("\n\n");
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}

// Push Function...
void push(int arr[], int ele)
{
    if (top == size - 1)
    {
        printf("Stack Is Full!\n");
        return;
    }
    top = top + 1;
    arr[top] = ele;
    return;
}

// Pop Function...
int pop(int arr[])
{
    int x;
    if (top == -1)
    {
        printf("Underflow Condition!\n");
        exit(0);
    }
    x = arr[top];
    top = top - 1;
    return x;
}

// Display Function...
void display(int arr[])
{
    int i;
    if (top == -1)
    {
        printf("Stack Is Empty!\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
    }
}
