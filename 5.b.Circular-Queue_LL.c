#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node *next;
};

struct node *front = 0;
struct node *rear = 0;

void push() {
    int x;
    printf("\n Enter the required number to be added to the Queue:");
    scanf("%d",&x);

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode -> data = x;
    newnode -> next = 0;

    if(rear == 0) {
        front = rear = newnode;
        rear -> next = front;
    }
    else {
        rear -> next = newnode;
        rear = newnode;
        rear -> next = front;
    }
}

void pop() {
    if ((front == 0) && (rear == 0))
    {
        printf("\n UNDERFLOW\n");
    }
    else if (front == rear)
    {
        printf("The deleted element is: %d\n", front->data);
        front = rear = NULL;
    }
    else
    {
        struct node *temp;
        temp = front;
        printf("The deleted element is %d\n", temp->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display() {
    struct node *temp;
    temp = front;
    if ((front == 0) && (rear == 0))
    {
        printf("\nUNDERFLOW\n");
    }
    printf("The elements of the queue are : ");
    while (temp->next != front)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("%d", rear->data);
    printf("\n");
}

void main() {
    int option;
    printf("\n Operations to perform using Stack :");
    do
    {
        printf("\n \t 1.Push \n \t 2.Pop \n \t 3.Display \n \t 4.Exit");
        printf("\n \n Enter the required option :");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            push();
            break;
        }

        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            display();
            break;
        }

        case 4:
        {
            break;
        }

        default:
        {
            printf("/n Enter a valid option !");
        }
        }
    } while (option != 4);
}
