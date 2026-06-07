
#include<stdio.h>

void selection_sort (int size , int arr[]){

     for (int i = 0 ; i < size - 1 ;i++) {
      int minIndex = i;
           for (int j = i+1 ; j < size; j++ ){
               if (arr[j]< arr[minIndex]){
                     minIndex = j;
               }
           }

           int temp = arr[minIndex];
           arr[minIndex] = arr[i];
           arr[i] = temp;

     }
}

int main (){

int size;
printf("Enter array size : ");
scanf("%d",&size);

int arr[size];
printf("Enter elements : ");
for (int i = 0 ;i < size ; i++){
    scanf("%d",&arr[i]);
}

selection_sort(size,arr);

printf("sorted array : ");
for (int i = 0 ; i < size ; i++){
    printf("%d ",arr[i]);
}

printf("\n");

    return 0;
}
