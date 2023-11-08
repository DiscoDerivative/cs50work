#include <stdio.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1;

    /*
    Must include following operations
    Enqueue: add an element to the end of the queue
    Dequeue: Remove an element from the front of the queue
    IsEmpty: Check if the queue is empty
    IsFull: Check if the queue is full
    Peek: Get the value of the front of the queue without removing it

    Two Pointers: FRONT and REAR
    Front - tracks the first element of the queue
    Rear - tracks the last element of the queue

    Enqueue: Check if queue is full, first element should be 0
    Increase the rear index by 1
    Add new element in position pointed to by rear

    Dequeue: Check if the queue is empty
    Return the value pointed by front
    Increase front by 1
    Last element should reset the value of front and rear to -1
    */

void enqueue(int value);
void dequeue();
void display();

int main(void)
{
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  enqueue(5);
  display();
  dequeue();
  display();
}

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full.\n");
    }
    else
    {
        if(front == -1)
        {
            front = 0;
        }
            rear += 1;
            items[rear] = value;
            printf("Inserted: %d\n", value);
    }
}

void dequeue() 
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else 
    {
        printf("Deleted: %d\n", items[front]);
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if(rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue: ");
        for(int i = front; i <= rear; i++)
        {
            printf("%d ", items[i]);
        }
        printf("\n");
    }
}