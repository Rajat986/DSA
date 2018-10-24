  GNU nano 2.9.3                                                      stack.c                                                                 

#include<stdio.h>
struct Stack
{
        int size;
        int top;
        int stack_arr[10];
};

typedef struct Stack stack;

int push(stack *s,int item)
{
        if(s->top == s->size-1)
        {
                return 11;
        }
        printf("Pushed item in stack is %d\n",item);
        s->top++;
        s->stack_arr[s->top]=item;
        return 0;
}
int display(stack s)
{
        if(s.top == -1)
        {
                return 11;
        }
        for(int i=s.top;i >= 0;i--)
        {
                printf("%d\n",s.stack_arr[i]);
        }
        return 0;
}
  GNU nano 2.9.3                                                      stack.c                                                                 

        s->top++;
        s->stack_arr[s->top]=item;
        return 0;
}
int display(stack s)
{
        if(s.top == -1)
        {
                return 11;
        }
        for(int i=s.top;i >= 0;i--)
        {
                printf("%d\n",s.stack_arr[i]);
        }
        return 0;
}
int pop(stack *s)
{
        if(s -> top == -1)
        {
                return 22;
        }

        printf("\nPopped Element is : %d\n",s->stack_arr[s->top]);
        s->top--;
        return 0;
}
void main()
{
        int a,b,d;
        printf("Enter size of stack: ");
        stack s;
        scanf("%d",&s.size);
        
        
       
       
         GNU nano 2.9.3                                                      stack.c                                                                 

{
        if(s -> top == -1)
        {
                return 22;
        }

        printf("\nPopped Element is : %d\n",s->stack_arr[s->top]);
        s->top--;
        return 0;
}
void main()
{
        int a,b,d;
        printf("Enter size of stack: ");
        stack s;
        scanf("%d",&s.size);
        s.top=-1;
        a=push(&s,1);
        if(a==11)
        {
                printf("Stack is FULL");
        }
        b=push(&s,20);
        d=display(s);
        pop(&s);
        display(s);
}
