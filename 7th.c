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
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;
 while (top <= bottom && left <= right) {
 for (int i = left; i <= right; i++) {
    printf("%d", arr[top][i]);
   if (!(top == bottom && i == right)) printf(",");
       }
 top++;
 for (int i = top; i <= bottom; i++) {
 printf("%d", arr[i][right]);
 if (!(i == bottom && left > right)) printf(",");
 }
 right--;
   if (top <= bottom) {
 for (int i = right; i >= left; i--) {
   printf("%d", arr[bottom][i]);
      if (!(bottom == top && i == left)) printf(",");
      }
      bottom--;
        }
     if (left <= right) {
      for (int i = bottom; i >= top; i--) {
    printf("%d", arr[i][left]);
if (!(i == top && left == right)) printf(",");
    }
   left++;
   }
   }
 return 0;
}
