#include <stdio.h>
#include <stdlib.h>   

#define MAX 5

int stack[MAX];   
int top = -1;

void push();
void pop();
void peek();
void traverse();

int main() {
    int choice;
    char ch;
    do {
        printf("1. Push()\n");
        printf("2. Pop()\n");
        printf("3. Peek()\n");
        printf("4. Traverse()\n");

        printf("Enter Your Choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: peek();
                    break;
            case 4: traverse();
                    break;
            default: printf("Invalid\n");
        }

        printf("Do you want to continue (Y or y):\n");
        getchar(); 
        scanf("%c", &ch);
    } while (ch == 'Y' || ch == 'y');

    return 0;
}

void push() {
    int ele;
    if (top == MAX - 1) {
        printf("Stack Overflow.\n");
    } else {
        printf("Enter the Element:\n");
        scanf("%d", &ele);
        top = top + 1;
        stack[top] = ele;
    }
}

void pop() {
    int dele;
    if (top == -1) {
        printf("Stack Underflow.\n");
    } else {
        dele = stack[top];
        top = top - 1;
        printf("Deleted Element is %d\n", dele);
    }
}

void peek() {
    if (top == -1) {
        printf("Stack is Empty.\n");
    } else {
        printf("Topmost element of stack is %d\n", stack[top]);
    }
}

void traverse() {
    int i;
    if (top == -1) {
        printf("Stack is Empty.\n");
    } else {
        printf("Stack Elements:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}