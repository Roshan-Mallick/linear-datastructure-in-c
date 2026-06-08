
#include<stdio.h>

int main (){

    int arr[100] = { 10 , 20 , 30 , 40 , 50 };
    int size = 5;
    int index = 2 ;
    int value = 25;

    printf("Before element insert : ");
    for (int i = 0 ;i < size ;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");


    for (int i = size ; i > index ; i--){
        arr[i]=arr[i-1];
    }

    arr[index] = value;
    size++;



    printf("After element insert  : ");
    for (int i = 0 ;i < size ;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

     printf("%d inserted at index %d \n",value,index);


    return 0;
}
