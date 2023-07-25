
#include<stdio.h>
int add();
int main()
{
    int result;
    result=add();
    printf("%d",result);
    return 0;
}
int add()
{
    int a,b;
    a=1;b=2;
    return a+b;
}
