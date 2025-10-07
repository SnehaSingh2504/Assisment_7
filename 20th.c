#include <stdio.h>

int lastOccurrence(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    int result = -1;

    while(left <= right) {
        int mid = left + (right - left)/2;

        if(arr[mid] == key) {
            result = mid;       
            left = mid + 1;   
        }
        else if(arr[mid] < key) {
            left = mid + 1;    
        }
        else {
            right = mid - 1;  
        }
    }

    return result;
}

int main() {
    int n, key;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    int index = lastOccurrence(arr, n, key);
    printf("%d\n", index);

    return 0;
}
