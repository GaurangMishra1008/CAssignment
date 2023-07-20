#include <stdio.h>
int main() {
    int num = 2,i = 1;
    printf("Multiplication table of %d:\n", num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
