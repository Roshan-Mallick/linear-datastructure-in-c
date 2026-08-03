#include<stdio.h>


int main  () {

    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size+1];

    printf("Enter the element of the array : ");
    for (int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }

    int index , value ;

    printf("Enter index in which you want to insert the value : ");
    scanf("%d",&index);

    if (index < 0 || index > size){
        printf("invalid index : ");
        return 0;
    }
    printf("Enter the value which you want to insert : ");
    scanf("%d", &value);


    printf("Current array with elements : ");
    for ( int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    for (int i = size ; i >= index ; i--){
        arr[i]=arr[i-1];
    }

    arr[index]=value;
    size++;


    printf("Araay after element insert : ");
    for ( int i = 0 ; i < size ; i++){
        printf("%d  ",arr[i]);
    }

    printf("\n");

    return 0;
}
