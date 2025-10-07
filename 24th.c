#include <stdio.h>

int findFloor(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1; 

    while(left <= right) {
        int mid = left + (right - left)/2;

        if(arr[mid] <= target) {
            result = arr[mid];  
            left = mid + 1;    
        } else {
            right = mid - 1;  
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

    int floorValue = findFloor(arr, n, target);
    printf("%d\n", floorValue);

    return 0;
}
