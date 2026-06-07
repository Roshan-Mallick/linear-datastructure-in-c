#include<stdio.h>

void bubble_sort(int size,int arr[]){

    for (int i = 0 ; i < size - 1 ; i++){
        int swapped = 0;
           for (int j = 0 ; j < size - i - 1 ;j++){
             if (arr[j]>arr[j+1]){
                 int temp = arr[j+1];
                 arr[j+1] = arr[j];
                 arr[j] = temp;

                 swapped = 1 ;
             }
        }

           if (swapped == 0) break;
    }



}

int main () {

    int size ;
    printf("Enter array size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements : ");
    for (int i = 0 ;i < size ; i++){
        scanf("%d",&arr[i]);
    }

    bubble_sort(size,arr);

    printf("sorted array : ");
    for (int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0 ;
}
