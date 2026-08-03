#include<stdio.h>


int main (){

    int arr1[4] = {1,2,3,4};
    int low1 = 0 ;
    int high1 = 3 ;
    int arr2[4]={5,6,7,8};
    int low2 = 0;
    int high2 = 3;


    int merge[8];
    int k = 0;

    while (low1 <= high1 || low2 <= high2){

        if (low1<=high1){
            merge[k++] = arr1[low1++];
        } else  if ( low2 <= high2 ){
            merge[k++]=arr2[low2++];
        }

    }

    printf("Final merged array : ");
    for (int i = 0 ; i < k ; i++) {

        printf("%d ",merge[i]);
    }



    return 0;
}
