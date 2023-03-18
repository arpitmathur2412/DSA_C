#include <stdio.h>

#define SIZE 5

struct Queue{
  int items[SIZE];
  int front; 
  int rear;
};

typedef struct Queue Q;
Q q;

// Check if the queue of cars is full
int isFull() 
{
  if ((q.front == q.rear + 1) || (q.front == 0 && q.rear == SIZE - 1)) return 1;
  return 0;
}

// Check if the queue of cars is empty
int isEmpty() 
{
  if (q.front == -1) return 1;
  return 0;
}

// Adding a new car in the queue
void enQueue(int element) 
{
  if (isFull())
    printf("You need to wait !\n");
  else 
  {
    if (q.front == -1) q.front = 0;
    q.rear = (q.rear + 1) % SIZE;
    q.items[q.rear] = element;
    printf("You are in a Queue ! \n");
  }
}

// Removing the car from the queue
int deQueue() 
{
  int element;
  if (isEmpty()) 
  {
    printf("No Car present!\n");
    return (-1);
  } else 
  {
    element = q.items[q.front];
    if (q.front == q.rear) 
    {
      q.front = -1;
      q.rear = -1;
    } 
    // Q has only one element, so we reset the 
    // queue after dequeing it. ?
    else 
    {
      q.front = (q.front + 1) % SIZE;
    }
    printf("Your Car is Washed. Thank you !\n");
    return (element);
  }
}

// Display the queue
// void display() {
//   int i;
//   if (isEmpty())
//     printf(" \n Empty Queue\n");
//   else {
//     printf("\n Front -> %d ", front);
//     printf("\n Items -> ");
//     for (i = front; i != rear; i = (i + 1) % SIZE) {
//       printf("%d ", items[i]);
//     }
//     printf("%d ", items[i]);
//     printf("\n Rear -> %d \n", rear);
//   }
// }

int main() 
{
  q.front = -1;
  q.rear = -1;
  printf("****Welcome to Car Washing Company*****\n");
  //customer to choose his desired option
    printf("1. Wash You Car\n");
    printf("2. Remove You Car\n");
    printf("3. Quit\n");
    int num = 1;
    int choice;
    scanf("%d", &choice);
    while(choice != 3)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // wash the car
            //int num = 1;
            enQueue(num);
            break;

        case 2: //remove the car from queue
            deQueue();
            break;

        case 3: //quit
            break;

        default: //invalid choice opted
            printf("Enter correct choice !");
            break;
        }
    }

  return 0;
}