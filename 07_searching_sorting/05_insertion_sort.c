#include <stdio.h>

void insertion_sort(int arr[], int size)
{
    int i, j, value;

    for (i = 1; i < size; i++) {
        value = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > value) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = value;
    }
}

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    insertion_sort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
