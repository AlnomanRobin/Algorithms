#include <stdio.h>
int main() {
    int arr[] = {2, 3, 5, 8, 10};
    int n = 5, target = 8;
    int left = 0, right = n - 1, mid, found = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(arr[mid] == target) {
            printf("Element %d found at index %d\n", target, mid);
            found = 1;
            break;
        } else if(arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if(!found) printf("Element %d not found\n", target);
    return 0;
}
