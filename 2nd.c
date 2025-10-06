#include <stdio.h>
int main() {
 int n;
scanf("%d", &n);  
  int arr[n]; 
  for(int i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
    }
  int total_sum = n * (n + 1) / 2;
 int arr_sum = 0;
 for(int i = 0; i < n; i++) {
   arr_sum += arr[i];
 }
 int missing = total_sum - arr_sum;
printf("%d", missing);
  return 0;
}
