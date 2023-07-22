z#include <stdio.h>
int main() {
    int a,b,i = 1;
    printf("Enter two Random No. :\n", a,b);
    scanf("%d%d", &a,&b);
    for(;a<=b;a++)
    {
        for(i=1;i <= 10;i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    }
    return 0;
}

