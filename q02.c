//  Wap to reverse a string using stack...

#include <stdlib.h>
#include <stdio.h>
#define size 100

int top;

void push(char str[], char ch);
char pop(char str[]);

int main()
{
    int i;
    char str[size], rev[size], stack[size];
    top = -1;
    printf("Enter A String: ");
    scanf("%s", &str);

    for (i = 0; str[i]; i++)
    {
        push(stack, str[i]);
    }

    i = 0;
    while (top != -1)
    {
        rev[i++] = pop(stack);
    }
    rev[i] = '\0';

    printf("Reverse String Is: %s", rev);
    return 0;
}

// Push Function For Character Stack
void push(char str[], char ch)
{
    if (top == size - 1)
    {
        printf("Stack Is Full!\n");
        return;
    }
    top++;
    str[top] = ch;
    return;
}

// Pop Function For Character Stack
char pop(char str[])
{
    char temp;
    if (top == -1)
    {
        printf("Underflow Condition!\n");
        exit(0);
    }
    temp = str[top];
    top--;
    return temp;
}