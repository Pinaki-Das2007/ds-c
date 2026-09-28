#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;

struct node *createNode(int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void display(){
    if(head == NULL){
        printf("\nList is empty\n");
        return;
    }
    struct node *temp = head;
    printf("\nList : ");
    do{
        printf("%d  ", temp->data);
        temp = temp->next;
    }while(temp != head);
    printf("\n");
}