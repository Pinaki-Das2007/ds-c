#include<stdio.h>
#include<ctype.h>
#define max 20

int stack[max];
int top=-1;

int postfix_eval(char postfix[]){
    int i=0, value1, value2, result=0;
    while(postfix[i]!='\0'){
        char c = postfix[i];
        i++;
        if(isdigit(c)){
            stack[++top]=c-'0';
        }
        else{
            value1=stack[top];
            top--;
            value2=stack[top];
            top--;

            switch(c){
                case '+':
                    result=value1+value2;
                    break;
                case '-':
                    result=value1-value2;
                    break;
                case '*':
                    result=value1*value2;
                    break;
                case '/':
                    result=value1/value2;
                    break;
                    default:
                    printf("Invalid operator");
                    break;
            }
            stack[++top]=result;
        }
    }
    return stack[top];
}   
int main(){
    char postfix[max];
    printf("Enter the postfix expression: ");
    scanf("%s",postfix);
    int result = postfix_eval(postfix);
    printf("The result  is: %d\n", result);
    return 0; 
}queoperator.c
