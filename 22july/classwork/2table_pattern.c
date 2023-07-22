#include <stdio.h>
int main() {
    int num = 2,i = 1;
    printf("Multiplication table of %d:\n", num);
    for  (;i <= 10;i++)
        printf("%d x %d = %d\n",num,i, num * i);
    return 0;
}
