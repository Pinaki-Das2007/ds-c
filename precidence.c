#include <stdio.h>
# define max 20
char stack[max];
int top =-1;

int precedence(char ch) {
    if(ch == '^'){
        return 3;
    }

    else if(ch == '*' || ch == '/'){
        return 2;
    }
    else if(ch == '+' || ch == '-'){
        return 1;
    }
    else{
        return -1;
    }
}

void infix_to_prefix(char infix[], char postfix[]) {
    
}