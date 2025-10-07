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
   
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == target) {
                  printf("Yes\n");
    else
        printf("No\n");
                break;
            }
        }
    }
    return 0;
}
