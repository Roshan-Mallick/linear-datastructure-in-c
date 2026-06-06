#include<stdio.h>

void binary_search(int arr[],int size,int target){

    int low = 0 ; int high = size - 1;

    while (low <= high){

        int mid = low + (high - low )/2;


            if (arr[mid]==target){
                printf("Eelement found at index %d\n",mid);
                return ;
            } else if ( arr[mid] < target){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
    }

    printf("Eelement not found\n");

}

int main () {

    int size ;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter elements in sorted manner : ");
    for (int i = 0 ;i < size; i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter targert element : ");
    scanf("%d",&target);

    binary_search(arr,size,target);


    return 0;
}
