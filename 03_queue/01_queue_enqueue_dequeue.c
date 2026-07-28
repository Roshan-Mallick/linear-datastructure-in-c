#include<stdio.h>

#define size 4
int queue[size];
int front = -1;
int rear = -1 ;

int is_full(){
    return (rear == size - 1 );
}

int is_empty(){
     return (front == -1);
}

int enqueue(int value ) {
    if(is_full()){
        printf("Overflow");
        return 0;
    }

    if (is_empty()){
        front = 0;
    }

    queue[++rear]= value;
}


int display (){
    if(is_empty()){
        return printf("queue is empty");
    }

    printf("queue elements are : ");
    for (int i = front ; i <= rear ; i++){
        printf("%d ",queue[i]);
    }
}


int dequeue(){
    if (is_empty()){
        return printf("Underflow");
    }

  printf("Element deleted: %d\n", queue[front]);
    front++;

    if (front > rear) {
        front = -1;
        rear = -1;
    } else {}
}

int main (){

    enqueue(50);
    enqueue(40);
    enqueue(70);
    enqueue(90);
    display();

    printf("\n");

    dequeue();
    display();

    printf("\n");




    return 0;
}
