#include <stdio.h>

int findCeil(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1; 
    while(left <= right) {
        int mid = left + (right - left)/2;

        if(arr[mid] >= target) {
            result = arr[mid];  
            right = mid - 1;  
        } else {
            left = mid + 1;     
        }
    }

    return result;
}

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    scanf("%d", &target);

    int ceilValue = findCeil(arr, n, target);
    printf("%d\n", ceilValue);

    return 0;
}
