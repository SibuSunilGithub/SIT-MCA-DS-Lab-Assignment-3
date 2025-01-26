// Wap to convert decimal number to binary using stack...

#include <stdio.h>
#include <stdlib.h>
#define size 100
int top;

void push(int arr[], int ele);
int pop(int arr[]);

int main()
{
    int stack[size], num, rem;
    printf("Enter A Number: ");
    scanf("%d", &num);
    printf("Binary Of %d Is: ", num);
    top = -1;

    while (num)
    {
        rem = num % 2;
        push(stack, rem);
        num /= 2;
    }

    while (top != -1)
    {
        printf("%d", pop(stack));
    }
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
