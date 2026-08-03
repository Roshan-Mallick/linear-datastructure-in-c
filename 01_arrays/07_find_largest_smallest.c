#include<stdio.h>

int main () {

  int size ;
  printf("Enter the size of the array  : ");
  scanf("%d",&size);

  int arr[size];
  printf("Enter array elements : ");
  for (int i = 0 ; i < size ; i++){
      scanf("%d",&arr[i]);
  }


  int largest = arr[0];
  int smallest = arr[0];

  for (int i = 1 ; i < size ; i++){

      if (arr[i]>largest){
          largest = arr[i];
      }

      if (arr[i]< smallest){
          smallest = arr[i];
      }
  }

  printf("largest is in the array : %d\n",largest);
  printf("Smallesr in the array :  %d\n",smallest);

    return 0;
}
