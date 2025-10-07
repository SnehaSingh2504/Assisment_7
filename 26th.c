#include <stdio.h>

int main() {
    int n, m, target;
    scanf("%d %d", &n, &m);  
   scanf("%d", &target);
  
    int matrix[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int foundRow = -1, foundCol = -1;  
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                foundRow = i;
                foundCol = j;
                break; 
            }
        }
        if(foundRow != -1) break; 
    }
    printf("(%d,%d)\n", foundRow, foundCol);
    return 0;
}
