#include <stdio.h>
int main() {
    int n, m, target;
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    scanf("%d", &target);

    int row = 0, col = m - 1;  
    int found = 0;

    while (row < n && col >= 0) {
        if (matrix[row][col] == target) {
            found = 1;
            break;
        } else if (matrix[row][col] > target) {
            col--;
        } else {
            row++;  
        }
    }

    if (found)
        printf("Activated\n");
    else
        printf("Failed\n");

    return 0;
}
