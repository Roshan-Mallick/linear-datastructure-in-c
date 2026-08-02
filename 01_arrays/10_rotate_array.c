#include<stdio.h>



int main () {

 int size;
 printf("Enter size of the array : ");
 scanf("%d",&size);
 
 int arr[size];
 printf("Enter elements in the array : ");
 for (int i = 0 ; i < size ; i++){
    scanf("%d",&arr[i]);
 }
 
 int k;
 printf("Enter kth position to rotate : ");
 scanf("%d",&k);
 
 k--;
 
 int temp[size];
 int index = 0 ;
 
 for (int i = k ; i < size ; i++){ // copy from kth position to size - 1 // end  
     temp[index++]=arr[i];
 }
 
 for (int i = 0 ; i < k ; i++ ){
    temp[index++]=arr[i];
 
 }
 
 for (int i = 0 ; i < size ; i++) {
   arr[i]=temp[i];
 }
  
 printf("Rotated array : ");
 
 for (int i = 0 ; i < size ;i++) {
     printf("%d ",arr[i]);
 }





  return 0;
}
