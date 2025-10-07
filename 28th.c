#include <stdio.h>
int main() {
    int n, m, target;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    scanf("%d", &target);

    int low = 0, high = n * m - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m;
        int col = mid % m;
        int value = matrix[row][col];

        if (value == target) {
            ans = mid;
            high = mid - 1; 
        } 
        else if (value < target) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }

    if (ans != -1) {
        printf("(%d,%d)\n", ans / m, ans % m);
    } else {
        printf("(-1,-1)\n");
    }

    return 0;
}
