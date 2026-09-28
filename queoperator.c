#include<stdio.h>
#define max 5


int queue[max];
int front = -1;
int rear = -1;

int isFull() {
    return rear == max -1;

}
int isEmpty() {
    return front == -1 || front > rear;
}

void enQueue(int n) {
    if (isFull()) {
        printf("Queue is full\n");
        return;
    }

    else{
    if (front == -1) {
        front = 0;
    }

    else  {

        rear++;
    }
    
}
    queue[rear] = n;
    printf("\n%d inserted ", n);


    void deQueue() {
        if (isEmpty()) {
            printf("Queue is empty\n");
            return; 
        }
        else {z
            printf("\n%d deleted ", queue[front]);
            front++;
            if(front > rear) {
                front = rear = -1;
            }
        }
    }
}