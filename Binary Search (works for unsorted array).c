#include <stdio.h>
int main() {
    int arr[] = {10, 2, 5, 8, 3};
    int n = 5, target = 8;
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }

    if(!found) printf("Element %d not found\n", target);
    return 0;
}
