#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of lines:");
    scanf("%d",&n);
    int i,j=1;
    for(int a=1;a<=n;a++)
    {
        for(i=4;i>=a;i--)
            printf(" ");
        for(j=1;j<=a;j++)
                printf("*");
        printf("\n");
    }
}
