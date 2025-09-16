// Lab 7: Queue Implementation using Array
#include<stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if(rear >= MAX - 1) {
        printf("Queue Overflow\n");
    } else {
        if(front == -1) {
            front = 0;
        }
        queue[++rear] = value;
        printf("Enqueued: %d\n", value);
    }
}

void dequeue() {
    if(front == -1 || front > rear) {
        printf("Queue Underflow\n");
    } else {
        printf("Dequeued: %d\n", queue[front]);
        front++;
        if(front > rear) {
            front = rear = -1;
        }
    }
}

void display() {
    if(front == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    
    display();
    
    dequeue();
    dequeue();
    
    display();
    
    enqueue(50);
    display();
    
    return 0;
}

/*
Sample Output:
Enqueued: 10
Enqueued: 20
Enqueued: 30
Enqueued: 40
Queue elements: 10 20 30 40
Dequeued: 10
Dequeued: 20
Queue elements: 30 40
Enqueued: 50
Queue elements: 30 40 50
*/