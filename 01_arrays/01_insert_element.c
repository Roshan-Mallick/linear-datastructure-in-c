
#include<stdio.h>

int main (){

    int size;

    printf("Enter size : ");
    scanf("%d",&size);



    int arr[size];
    printf("Enter array elements : ");
	    for (int i = 0 ; i < size ; i++){
                   scanf("%d",&arr[i]);
	    }


    int index;
    printf("Enter value of the index : ");
    scanf("%d",&index);

    int value;
    printf("Enter index value : ");
    scanf("%d",&value);

    printf("Before element insert : ");
    for (int i = 0 ;i < size ;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");


    for (int i = size ; i > index ; i--){
        arr[i]=arr[i-1];
    }

    arr[index] = value;
    size++;



    printf("After element insert  : ");
    for (int i = 0 ;i < size ;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

     printf("%d inserted at index %d \n",value,index);


    return 0;
}
