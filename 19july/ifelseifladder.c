#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a and b and c");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("A is max");
    else if(b>a && b>c)
    printf("B is max");
    else if(c>a && c>b)
    printf("c is max");
    else
    printf("All Equal");
    return 0;
}
