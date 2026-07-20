#include<stdio.h>

int main (){

   int temp;
   int arr[5] = {10,20,30,40,50};
   printf("Current array : ");
   for (int i = 0;i < 5;i++){
       printf("%d ",arr[i]);
   }

   for(int i = 0 ;i < 5/2;i++){
       temp = arr[i];
       arr[i]=arr[5-1-i];
       arr[5-1-i]=temp;
   }

  printf("\nreversed array : ");
   for (int i = 0;i < 5;i++){
       printf("%d ",arr[i]);
   }

   printf("\n");

    return 0;
}
