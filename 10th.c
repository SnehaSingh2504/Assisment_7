#include <stdio.h>
int main() {
   int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
       scanf("%d", &arr[i][j]);
        }
    }
int ponds = 0;
  for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
         if(arr[i][j] == 1){
      ponds++;
            }
        }
    }
    printf("%d\n", ponds);
    return 0;
}
