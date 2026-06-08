#include<stdio.h>

int Linear_search (int arr[],int size,int target){
    for (int i = 0 ; i < size ; i++){
        if (arr[i] == target){
            return i ;
        }
    }
    return -1;
}
int main () {

  int size ;
  printf("Enter the size of array : ");
  scanf("%d",&size);

  int arr[size];
  printf("Enter elements in the array : ");
  for (int i = 0; i< size; i++){
      scanf("%d",&arr[i]);
  }

  int target ;
  printf("Enter the target element : ");
  scanf("%d",&target);


  int result = Linear_search (arr,size,target);

  if (result != -1){
      printf("element found at index : %d \n",result);

  } else {
      printf("element not found\n");
  }

    return 0;
}
