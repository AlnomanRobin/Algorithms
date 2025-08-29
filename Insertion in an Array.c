#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 4, 5}; // initial array
    int n = 4;                  // current size
    int pos = 2;                // position to insert (0-based index)
    int element = 3;            // element to insert
    if(n >= 10) {
        printf("Array is full, cannot insert.\n");
        return 0;
    }
    // Shift elements to the right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = element; // insert element
    n++;                // increase size
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
