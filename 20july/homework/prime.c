#include <stdio.h>
int main() {
    int num, i = 2,flag = 1;
    printf("Enter a number ");
    scanf("%d", &num);
    while (i <= num / 2) {
        if (num % i == 0) {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag && num > 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
