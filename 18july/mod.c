#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,res1,res2,res3;
    a=6;
    b=5;
    res1=a%b;
    c=7;
    d=9;
    res2=c%d;
    e=4;
    f=2;
    res3=e%f;
    printf("%d mod %d = %d \n%d mod %d = %d \n%d mod %d = %d \n",a,b,res1,c,d,res2,e,f,res3);
    return 0;
}

