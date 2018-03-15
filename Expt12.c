//Write a program to implement circular queue using array
#include <stdio.h>
#define size 4

int queue[size];
int front =  - 1;
int rear =  - 1;
void insertq(int);
void deleteq();
void display();
int isEmpty()
{
    if (front ==rear)
        return 0;
    else
        return 1;
}

int main()
{
    int n, ch;
    do
    {
        printf("\n\n Circular Queue:\n1. Insert \n2. Delete\n3. Display\n0. Exit");
        printf("\nEnter Choice 0-3? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\n Enter number: ");
                scanf("%d", &n);
                insertq(n);
                break;
            case 2:
                deleteq(queue);
                break;
            case 3:
                display(queue);
                break;
            default: printf("\n Wrong Option"); break;
        }
    }while (ch != 0);
}


void insertq(int item)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
        printf("queue is full");

    else{ if (rear ==  - 1)
    {
        rear++;
        front++;
    }
    else if (rear == size - 1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = item;
}
}

void display()
{
    if (isEmpty()==0)
        printf("\n Queue Empty!");
    else
    {
    int i;
    printf("\n");
    if (front > rear)
    {
        for (i = front; i < size; i++)
        {
            printf("%d ", queue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    }
}

void deleteq()
{
    if (front ==  - 1)
    {
        printf("Queue is empty ");
    }
    else if (front == rear)
    {
        printf("\n %d deleted", queue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\n %d deleted", queue[front]);
        front++;
    }
}
