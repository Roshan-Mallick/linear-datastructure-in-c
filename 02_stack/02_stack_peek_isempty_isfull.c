#include<stdio.h>

#define size 4

int stack[size];
int top = -1;

int is_stackFull(){
    return top == size - 1;
}

int is_stackEmpty(){
    return top == -1;
}

int push (int value ){
    if (is_stackFull()){
        printf("stack Overflow");
        return 0;
    }

    return printf("Pushed in the Stack : %d\n", stack[++top] = value) ;


}

int pop ( ){
    if (is_stackEmpty()){
        printf("stack underflow");
        return -1;
    }
 return printf("Popped : %d\n",stack[top--]);


}

int peek(){
    if (is_stackEmpty()){
        printf("Peek : stack underflow\n");
        return -1;
    }

    return printf("Peek = %d at top %d \n",stack[top],top);




}

int display (){
    if (is_stackEmpty()){
        printf("Display : stack is empty \n");
        return -1;
    }

    printf("stack top to bottom \n");
    for (int i = top ; i >= 0; i--){
        printf("Top %d = %d\n",i,stack[i]);
    }
     return 0;
}

int main (){

    push (10);
    push (20);
    push (30);

    printf("\n");

    display();

    printf("\n");

    peek ();

    printf("\n");

    pop ();
    pop ();

    printf("\n");

    display();

    printf("\n");

    peek();

    printf("\n");

    pop ();

    peek();

    printf("\n");


    return 0;
}
