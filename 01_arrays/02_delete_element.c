#include<stdio.h>

int main (){


    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array elements : ");
    for (int i = 0 ; i < size ;i++){
        scanf("%d",&arr[i]);
    }

    int index ;

    printf("Enter index to delete: ");
    scanf("%d",&index);

    if (index < 0 || index >= size){
        printf("Enter invalid index \n");
        return 0;
    }


    printf("Before element delete : ");
       for (int i = 0; i < size; i++) {
           printf("%d ", arr[i]);
       }
       printf("\n");

    int deleteValue = arr[index];

    for (int i = index;i< size - 1;i++){
        arr[i]=arr[i+1];
    }

    size--;

    printf("After element delete  : ");
     for (int i = 0; i < size; i++) {
         printf("%d ", arr[i]);
     }
     printf("\n");

     printf("%d deleted from index %d\n", deleteValue, index);


    return 0;
}
