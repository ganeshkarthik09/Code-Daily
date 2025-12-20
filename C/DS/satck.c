#include <stdio.h>

#define max 100

struct stack
{
    int top;
    int arr[max];
};

void initialize(struct stack *s)
{
    s->top = -1; // Stack is empty when top is -1
}

void push(struct stack *s, int data)
{
    s->arr[++(s->top)] = data;
}

int pop(struct stack *s)
{
    (s->top)--;
}

void display(struct stack *s)
{
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d  ", s->arr[i]);
    }
}

int main()
{
    struct stack s;
    initialize(&s);

    push(&s, 30);
    push(&s, 10);
    push(&s, 20);

    display(&s);
    printf("\n");

    pop(&s);
    push(&s, 40);
    printf("\n");
    display(&s);
}