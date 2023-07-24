#include<stdio.h>
int main()
{
    int i,j=1;
    for(int a=0;a<=5;a++)
    {
        for(i=4;i>=a;i--)
            printf(" ");
        for(j=0;j<=a;j++)
                printf("*");
        printf("\n");
    }
}
