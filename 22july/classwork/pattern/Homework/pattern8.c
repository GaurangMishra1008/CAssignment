#include <stdio.h>
int main() {
    int i,j,count=0;
    for(int i=1;i<=3;i++)
    {
    for(j=1;j<=i;j++)
    {count++;
     printf("%d",count);

    }
    printf("\n");
    }
    return 0;
}
