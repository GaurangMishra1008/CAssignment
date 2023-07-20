#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter value of a b c d e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>b && a>c && a>d && a>e)
    printf("A is max");
    else if(b>a && b>c && b>d && b>e)
    printf("B is max");
    else if(c>a && c>b && c>d && c>e)
    printf("c is max");
    else if(d>a && d>b && d>c && a>e)
    printf("d is max");
    else if(e>a && e>b && e>d && a>c)
    printf("e is max");
    else
    printf("All Equal");
    return 0;
}

