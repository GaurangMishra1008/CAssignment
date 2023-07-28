#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("a is greater");
    else if(b>a && b>c)
    printf("B is Greater");
    elseaif(c>a && c>b)
    printf("C is Greater");
    else
    printf("Not Valid");
    return ;
}


