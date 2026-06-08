#include<stdio.h>


int Binary_search(int arr[], int size, int target){

int low = 0 , high = size - 1;

while (low <= high){

    int mid = low + (high - low)/2;

           if (arr[mid]==target){
                return mid;
           } else if (arr[mid]>target){
               high = mid - 1;
           } else {
               low = mid + 1;
           }
  }

 return -1;
}
int main (){

    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in the array : ");
    for (int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int target ;
    printf("Enter target elements : ");
    scanf("%d",&target);

    int result = Binary_search(arr,size,target);

    if (result != -1 ){
        printf("Element found at index  : %d\n",result);
    } else {
        printf("element not found n\ ");
    }


    return 0;
}
