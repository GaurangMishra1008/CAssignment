#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: ");
    while (n > 0) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
        n--;
    }
    return 0;
}
