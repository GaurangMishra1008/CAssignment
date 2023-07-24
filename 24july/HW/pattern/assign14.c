#include<stdio.h>
int main()
{
    int i,j=1;
    for(int a=0;a<3;a++)
    {
        for(i=1;i<=a;i++)
            printf("#");
        for(j=3;j>a;j--)
                printf("*");

        printf("\n");
    }
}

