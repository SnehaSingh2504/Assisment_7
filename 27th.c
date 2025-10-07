#include <stdio.h>

int main() {
    int n, m, target;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    scanf("%d", &target);
    int total = n * m;
    int arr[total];
    int k = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[k++] = matrix[i][j];
        }
    }
    int low = 0, high = total - 1, found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = 1;
            break;
        } else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf(found ? "True\n" : "False\n");
    return 0;
}
