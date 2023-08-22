#include<stdio.h>
#include<stdlib.h>
#define Max 5

struct stack
{
    int arr[Max];
    int top;
};
 void push(struct stack *sptr; int value);
 void pop(struct stack *sptr);
 void display(struct stack *sptr);
void main()
{
    struct stack s1;
        s1.top = -1;
        push(&s1,2);
        push(&s1,3);
        pop(&s1);
        display(&s1);
    
}
void push(struct stack *sptr, int value)
{
    if(sptr->top >= Max-1)
    {
        printf("stack is a overflow");
    }
    else{
         sptr->top = sptr->top+1;
         printf("Enter a value in stack");
        sptr->arr[sptr->top] = value;
    }
}
void pop(struct stack *sptr)
{
    if(sptr->top<= -1)
    {
        printf("stack is underflow");
    }
    else
    {
        printf("Enter a value in stack");
        sptr->top=sptr->top-1;
    }
}
void display(struct stack *sptr)
{
    for(int i=0; i>=sptr->top;i++)
    {
        printf("%d",sptr->arr[i]);
    }
}

