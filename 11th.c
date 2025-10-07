#include <stdio.h>
void hanoi(int n, char source, char helper, char destination) {
    if(n == 0) return;
    hanoi(n-1, source, destination, helper);
    printf("Move disk %d from %c to %c\n", n, source, destination);
    hanoi(n-1, helper, source, destination);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Tower of Hanoi moves:\n");
    hanoi(n, 'A', 'B', 'C');

    int moves = (1 << n) - 1; 
    printf("Total moves = %d\n", moves);

    return 0;
}
