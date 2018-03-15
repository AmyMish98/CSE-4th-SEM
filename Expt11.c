//Write a program to implement linear queue using array
#include<stdio.h>
int queue[4], front=0, rear=0;
void enQ(int item)
{
    if (size()==4)
        printf("\n Overflow");
    else
        queue[rear++]=item;
}

void deQ()
{
    if (isEmpty()==0)
        printf("\n Underflow");
    else
        printf("\n Element deleted : %d",queue[front++]);
}

int isEmpty()
{
    if (front==rear)
    {
        printf("\n Queue empty");
        return 0;
    }
    else
        return 1;
}
int size()
{
    return (rear-front);
}

void  display()
{
    int i;
    for (i=front;i<=size();i++)
    printf("\n %d", queue[i]);
}

int main()
{
    int choice, item;
    do
    {
    printf("\n \n OPERATIONS \n 1.INSERT \n 2. DELETE \n 3. DISPLAY \n 4. EXIT \n Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: printf("\n Enter the item to be inserted: ");
                scanf("%d",&item);
                enQ(item);
                break;
        case 2: deQ();
                break;
        case 3: printf("\n Elements of the queue: ");
                display();
                break;
        case 4: printf("\n Exit the program");
                break;
        default: printf("\n Invalid case");
    }
    }while(choice!=4);
    return 0;
}
