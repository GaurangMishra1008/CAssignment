
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>b && a>c && a>d && a>e)
    printf("a is greater");
    else if(b>a && b>c && b>d && b>e)
    printf("B is Greater");
    else if(c>a && c>b && c>d && c>e)
    printf("C is Greater");
    else if(d>a && d>c && d>b && d>e)
    printf("D is Greater");
    else if(e>a && e>c && e>d && e>b)
    printf("E is Greater");
    else
    printf("Not Valid");
    return ;
}


