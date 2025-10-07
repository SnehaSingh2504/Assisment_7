#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[10][10];     
    int visited[10][10] = {0};
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            scanf("%d", &arr[i][j]);
    visited[0][0] = 1;
    int changed = 1;
    while(changed) {
        changed = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(visited[i][j]) {
                    if(j+1 < m && arr[i][j+1]==0 && !visited[i][j+1]) {
                        visited[i][j+1] = 1;
                        changed = 1;
                    }
                    if(i+1 < n && arr[i+1][j]==0 && !visited[i+1][j]) {
                        visited[i+1][j] = 1;
                        changed = 1;
                    }
                    if(j-1 >=0 && arr[i][j-1]==0 && !visited[i][j-1]) {
                        visited[i][j-1] = 1;
                        changed = 1;
                    }
                    if(i-1 >=0 && arr[i-1][j]==0 && !visited[i-1][j]) {
                        visited[i-1][j] = 1;
                        changed = 1;
                    }
                }
            }
        }
    }

    if(visited[n-1][m-1])
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
