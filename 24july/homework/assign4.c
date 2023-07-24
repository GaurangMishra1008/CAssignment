#include<stdio.h>
int main()
{
    int i,j=1;
    for(int a=1;a<=3;a++)
    {
        for(i=3;i>a;i--)
            printf(" ");
        for(j=1;j<=a;j++)
                printf("*");
        printf("\n");
    }
    for(int a=1;a<=2;a++)
    {
        for(i=1;i<=a;i++)
            printf(" ");
        for(j=2;j>=a;j--)
                printf("*");

        printf("\n");
    }
}

