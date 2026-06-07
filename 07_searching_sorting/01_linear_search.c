#include<stdio.h>

int linear_search(int arr[],int size,int target){

    for (int i = 0;i<size;i++){
        if ( arr[i]==target ){
            return i;
        }
    }

    return -1 ;
}

int main () {

    int size ;
    printf("Enter array size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elemnets : ");
    for (int i = 0 ; i < size ;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter element element : ");
    scanf("%d",&target);

    int result = linear_search(arr,size,target);

    if( result != -1){
         printf("Element found ar index %d \n",result);
    } else {
         printf("Element not found \n") ;
    }


    return 0;
}
