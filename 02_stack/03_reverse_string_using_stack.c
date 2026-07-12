#include<stdio.h>
#include <string.h>


#define size 100

char stack[size];
int top = -1;

int is_Full(){
    return top == size - 1;
}

int is_Empty(){
    return top == -1;
}

int push(char value){
    if (is_Full()){
        return printf("stack Overflow");
    }

    return stack[++top]=value;
}

int pop(){
    if (is_Empty()){
        return printf("stack Underflow");
    }

    return stack[top--];
}




int main()
{
    char str[100];

    printf("Enter a String : ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';  // Remove the newline added by fgets

    for (int i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = pop();
    }

    printf("Reversed String : %s\n", str);

    return 0;
}
