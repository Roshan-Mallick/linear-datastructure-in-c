#include<stdio.h>

#define size 4
int queue[size];
int front = -1;
int rear = -1;

int is_full(){
    return ((rear + 1) % size == front );
}

int is_Empty () {
    return ( front == -1 );
}


void enqueue (int value) {

   if (is_full()){
       printf("Queue Overflow\n");
       return;
   }

   if (is_Empty()){
       front = rear = 0;
   } else {
       rear = (rear + 1 ) % size ;
   }

  queue[rear]=value;
  printf("%d inserted\n",value);


}

void dequeue () {

    if (is_Empty()){
        printf("Queue Underflow\n");
        return ;
    }

    printf("%d Deleted ",queue[front]);

    if (front == rear ){
        front = rear = -1;
    } else {
        front = (front + 1) % size ;
    }
}


void display (){
    if (is_Empty()){
        printf("Underflow");
        return ;
    }

    int i = front ;

    printf("Queue : ");

    while (1){
        printf("%d ",queue[i]);

        if (i == rear) break;

        i = (i+1)%size;
    }

    printf("\n");
}

int main () {

 enqueue(1);
 enqueue(2);
 enqueue(3);
 enqueue(4);

 display();

 dequeue();

 display();

 enqueue(1);

 display();

    return 0;
}
