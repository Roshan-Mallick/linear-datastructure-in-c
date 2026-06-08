#include<stdio.h>

int main (){

    int arr[50]={10,20,30,40};
    int size = 4;
    int index = 2;

    printf("Before element delete : ");
       for (int i = 0; i < size; i++) {
           printf("%d ", arr[i]);
       }
       printf("\n");

    int deleteValue = arr[index];

    for (int i = index;i< size - 1;i++){
        arr[i]=arr[i+1];
    }

    size--;

    printf("After element delete  : ");
     for (int i = 0; i < size; i++) {
         printf("%d ", arr[i]);
     }
     printf("\n");

     printf("%d deleted from index %d\n", deleteValue, index);


    return 0;
}
