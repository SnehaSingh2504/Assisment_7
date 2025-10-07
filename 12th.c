#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if(n == 0 || n == 1) {
        printf("1\n");
        return 0;
    }

    int dp[n+1];
    dp[0] = 1; 
    dp[1] = 1; 

    for(int i=2; i<=n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    printf("%d\n", dp[n]);

    return 0;
}
