#include <stdio.h>

int sumArray(int arr[], int n) {
    if(n == 0) return 0;         
    return arr[0] + sumArray(arr + 1, n - 1); 
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = sumArray(arr, n);
    printf("%d\n", sum);

    return 0;
}
