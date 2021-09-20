#include <stdio.h>
int isFull();
int isEmpty();
void show();
int stack[5];
int top = -1;
int x;

void push()
{

    int pushValue;

    printf("[%d] Push Data: ", top + 1);

    scanf("%d", &pushValue);

    if (isFull())
    {
        printf("\nStack is Full \n");
    }
    else
    {
        top++;
        stack[top] = pushValue;
    }

    // (isFull)? 0 : (top++; stack [top] = 10)//;
}

void pop()
{

    if (isEmpty())
        printf("Under flow");
    else
        top--;

    show();
}

int isFull()
{

    return (top == 4) ? 1 : 0;
}

int isEmpty()
{

    return (top == -1) ? 1 : 0;
}

void show()
{

    if (isEmpty())
    {
        printf("Stack is Empty ");
    }

    else
    {
        for (int i = 0; i < top + 1; i++)
        {

            printf("[%d] [ %d ] \n\n",i,stack[i]);
        }
    }
}

int main()
{

    printf("[Push-> 1] [Pop-> 2] [Show-> 3]");

    while (1)
    {
        printf("\nEnter your Selection ");
        scanf("%d", &x);

        switch (x)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        default:
            break;
        }
    }
}