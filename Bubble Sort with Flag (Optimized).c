#include <stdio.h>
int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = 5, temp;
    int swapped;
    for(int i = 0; i < n-1; i++) {
        swapped = 0;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) break; // No swap means array is sorted
    }
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
