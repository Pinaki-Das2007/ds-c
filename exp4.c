#include <stdio.h>


void push();
void pop();
void display();
void traverse();


void main() {
    int stack(max) , choice,max,top ;
    char ch ;

    
    do{
       
        printf("\n 1.Push \n 2. Pop \n 3. Display \n4. Traverse \n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            push();
            break;
            
        case 2 :
             pop();
             break;

        case 3:
            display();
            break ;

        case 4 :
            traverse();
            break;


        default:
            printf("Invalid choice \n");

        }
        printf("Do you want to continue? (y/n): \n");
        scanf("%c ", &ch);
         
    }

    while (ch == 'y' || ch == 'Y');
    {
        void push();
        int ele;

        if (top == max-1){
            printf("Stack is in overflow condition \n");
        }
        else {
            printf("Enter the element to be  pushed: \n");
        }
        }
    }
    

    

     
  
    
} 