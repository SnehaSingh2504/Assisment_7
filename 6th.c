#include <stdio.h>
int main() {
 int rows, cols;
    scanf("%d %d", &rows, &cols);  
    int arr[rows][cols];
 for(int i = 0; i < rows; i++) {
for(int j = 0; j < cols; j++) {
scanf("%d", &arr[i][j]);
 }
    }
  int maxSum = -1000000000; 
int maxRow = 0;
 for(int i = 0; i < rows; i++) {
 int rowSum = 0;
for(int j = 0; j < cols; j++) {
 rowSum += arr[i][j];
  }
 if(rowSum > maxSum) {   
maxSum = rowSum;
 maxRow = i;       
 }
 }
 printf("Row %d (sum=%d)", maxRow, maxSum);
return 0;
}
