#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int pos = 2; // position to delete (0-based index)
    if(pos >= n || pos < 0) {
        printf("Invalid position.\n");
        return 0;
    }
    // Shift elements to the left
    for(int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--; // reduce size
    printf("Array after deletion: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
