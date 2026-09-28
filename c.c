#include<stdio.h>
#define max 5


int d_queue[max];
int front = -1;
int rear = -1;

//fuunction to check queue is full or not
int isEmpty() {
return front ==-1;

}

//function to check queue is empty or not
int isFull(){
    return (rear + 1)% max == front;
}
//function  to insert at rear

void insertRear(int n ){
    if (isFull()){
        printf("Queue is overflow\n");
    }
    else{
        if(isEmpty()){
            front = rear = 0;

        }

        else if(rear == max -1){
            rear = 0;

    }  else{
            rear++;
        }
        d_queue[rear] = n;
        printf("Inserted element at rear is %d\n",n);
    }
}
    
void insertFront(int n ){
    if (isFull()){
        printf("Queue is overflow\n");
    }
    else{
        if(isEmpty()){
            front = rear = 0;

        }

        else if(front == 0){
            front = max - 1;

    }  else{
            front--;
        }
        d_queue[front] = n;
        printf("Inserted element at front is %d\n",n);

        
    }
}