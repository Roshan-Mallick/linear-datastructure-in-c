#include<stdio.h>  // this works in sorted array of elemets only

int main (){


    int arr[5] = {0,0,1,1,3};


    int k = 0 ;

    for (int i = 0 ; i < 5 ;i++){
        if (arr[i]!=arr[k]){
            k++;
            arr[k]=arr[i];
        }
    }

    int newSize = k + 1;


   for (int i = 0; i< newSize;i++){
       printf("%d ",arr[i]);
   }

    return 0;
}
