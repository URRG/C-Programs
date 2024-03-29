#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CAPACITY 100

int queue[CAPACITY];
unsigned int size  = 0;
unsigned int rear  = CAPACITY - 1;  
unsigned int front = 0;

int enqueue(int data);
int dequeue();
int isFull();
int isEmpty();
int getRear();
int getFront();
void traverselist();




int main()
{
    int ch, data;

    while (1)
    {
        
        printf("  QUEUE ARRAY IMPLEMENTATION PROGRAM  \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Get Rear\n");
        printf("4. Get Front\n");
        printf("5. Display\n");
        printf("0. Exit\n");
        
        printf("Select an option: ");

        scanf("%d", &ch);

        
        
        switch (ch)
        {
            case 1:
                printf("\nEnter data to enqueue: ");
                scanf("%d", &data);

                
                if (enqueue(data))
                    printf("Element added to queue.");
                else
                    printf("Queue is full.");

                break;

            case 2:
                data = dequeue();
                if (data == INT_MIN)
                    printf("Queue is empty.");
                else
                    printf("Data => %d", data);

                break;

            case 3: 

                if (isEmpty())
                    printf("Queue is empty.");
                else 
                    printf("Rear => %d", getRear());

                break;

            case 4: 

                if (isEmpty())
                    printf("Queue is empty.");
                else 
                    printf("Front => %d", getFront());

                break;
            case 5: 

                traverselist();
                break;

            case 0:
                printf("Exiting from app.\n");
                exit(0);
        
            default:
                printf("Invalid choice, please input number between (0-5).");
                break;
        }

        printf("\n\n");
    }
}


int enqueue(int data)
{
    
    if (isFull()) 
    {
        return 0;
    }

    rear = (rear + 1) % CAPACITY;
    size++;

    queue[rear] = data;
    return 1;
}

int dequeue()
{
    int data = INT_MIN;

    if (isEmpty())
    {
        return INT_MIN;
    }

    data = queue[front];

    front = (front + 1) % CAPACITY;

    size--;

    return data;
}


int isFull()
{
    return (size == CAPACITY);
}


int isEmpty()
{
    return (size == 0);
}


int getFront()
{
    return (isEmpty())
            ? INT_MIN
            : queue[front];
}
int getRear()
{
    return (isEmpty())
            ? INT_MIN
            : queue[rear];
}
void traverselist()
{
    int i=0;
    i=front%CAPACITY;
    while(i<size){
        printf("%d",queue[i]);
        i=i+1;
    }
}


