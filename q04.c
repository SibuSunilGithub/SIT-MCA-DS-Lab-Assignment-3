// Wap to convert decimal number to octal using stack.

#include<stdlib.h>
#include<stdio.h>
#define size 100
int top = -1;

// Function Initializations
void push(int stack[], int ele);
int pop(int stack[]);
// Main Function 
int main()
{
    int num, stack[size], rem;
    printf("Enter A Number: ");
    scanf("%d", &num);
    printf("Octal Number Of %d Is: ", num);
    while (num)
    {
        rem = num % 8;
        push(stack, rem);
        num/=8;
    }
    while (top != -1)
    {
        printf("%d", pop(stack));
    }
    return 0;
}

// Push Function
void push(int stack[], int ele)
{
    if (top == size -1)
    {
        printf("Stack Is Full!\n");
        return;
    }
    top++;
    stack[top] = ele;
    return;
}

// Pop Function
int pop(int stack[])
{
    int ele;
    if (top == -1)
    {
        printf("Stack Is Empty!\n");
        exit(0);
    }
    ele = stack[top];
    top--;
    return ele;
}