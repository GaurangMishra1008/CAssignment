#include<stdio.h>
int show(int a,int b,int c,int d);
int main()
{

    int result;
    result=show(2,4,5,6);
    printf("%d",result);
    return 0;
}
int show(int a,int b,int c,int d)
{
    return a+b+c+d;
}
