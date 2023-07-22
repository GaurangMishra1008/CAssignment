#include <stdio.h>
int main() {
    int i,j;
    for(int i=1;i<=3;i++)
    {
    for(j=3;j>=i;j--)
        printf("* ");

    printf("\n");
    }
    return 0;
}
