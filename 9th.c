#include <stdio.h>
int n, m;
int arr[100][100];
int visited[100][100];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int dfs(int x, int y) {
  if(x < 0 || x >= n || y < 0 || y >= m || arr[x][y] == 1 || visited[x][y])
        return 0;
    if(x == n-1 && y == m-1)
        return 1;
    visited[x][y] = 1;
    for(int i=0; i<4; i++) {
     if(dfs(x + dx[i], y + dy[i]))
      return 1; 
    }
    return 0; 
}

int main() {
 scanf("%d %d", &n, &m);
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
 scanf("%d", &arr[i][j]);
  for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            visited[i][j] = 0;

    if(dfs(0,0))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
