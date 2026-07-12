#include <stdio.h>

#define size 5
int stack[size];
int top = -1;

int is_stackFull (){
    return top == size - 1;
}

int is_stackEmpty (){
  return top == -1;
}

int push (int value ){
    if (is_stackFull()){
        printf("Stack Overflow\n");
        return 0;
    }

 return stack[++top] = value ;

}

int pop () {

    if (is_stackEmpty()){
        printf("Stack underflow\n");
        return -1;
    }

   return stack[top--];


}

int display (){
    if (is_stackEmpty()){
        printf("Stack is Empty\n");
        return 0;
    }

    printf("stack element top to bottom \n");
    for (int i = top ; i >= 0; i--){
        printf("%d\n",stack[i]);
    }

    return 0;
}



int  main () {

push (10);
push (20);
push (30);
push (40);
push (50);

display();

push (60);

display();

while (!is_stackEmpty()){
    printf("poped : %d\n",pop());
}

display();

pop ();

    return 0;
}
