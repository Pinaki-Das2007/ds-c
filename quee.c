#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

struct node *createNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void enqueue(int data){
    struct node *newNode = createNode(data);

    if(front == NULL){
        front = rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode;
    }

    printf("\n%d inserted\n", data);
}

void dequeue(){
    if(front == NULL){
        printf("\nQueue is empty\n");
    }
    else{
        struct node *temp = front;
        if(front == rear){
            front = rear = NULL;
        }
        else{
            front = front->next;
        }
        printf("\n%d deleted\n", temp->data);
        free(temp);
    }
}    

void peek(){
    if(front == NULL){
        printf("\nQueue is empty\n");
    }
    else{
        printf("\nFront = %d\n", front->data);
    }
}

void display(){
    if(front == NULL){
        printf("\nQueue is empty\n");
    }
    else{
        struct node *temp = front;
        printf("\nQueue : ");
        while(temp != NULL){
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main(){
    int option, value;
    while (1)
    {
        printf("\n============QUEUE OPERATIONS=========\n\n");
        printf("1. enqueue().\n");
        printf("2. dequeue().\n");
        printf("3. peek().\n");
        printf("4. display().\n");
        printf("5. exit program.\n");
        printf("\nEnter option 1 to 5 : ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("Enter value : ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2: 
            dequeue(); 
            break;
        case 3: 
            peek(); 
            break;
        case 4: 
            display(); 
            break;
        case 5: 
            printf("Program terminated\n");
            exit(1);
        default:
            printf("In-vailed Option");
            break;
        }
    }
    
}