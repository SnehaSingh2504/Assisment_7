#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);  
 int arr[n][n];
 for(int i = 0; i < n; i++) {
   for(int j = 0; j < n; j++) {
     scanf("%d", &arr[i][j]);
        }
    }
 int FirstDiagonalSum = 0;
  int secondDiagonalSum = 0;
  for(int i = 0; i < n; i++) {
 FirstDiagonalSum += arr[i][i];          
secondDiagonalSum += arr[i][n - i - 1]; 
    }
    printf("First Diagonal Sum = %d\n", FirstDiagonalSum);
    printf("Second Diagonal Sum = %d\n", secondDiagonalSum);
    return 0;
}
