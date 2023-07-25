#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);

int main()
{
    int result;
    result=add(2,5);
    int result1=mul(2,5);
    int result2=div(2,5);
    int result3=sub(2,5);
    int result4=mod(2,5);
    printf("addition of 2 and 5 :%d\n",result);
    printf("Multiplication of 2 and 5 :%d\n",result1);
    printf("Division of 2 and 5 :%d\n",result2);
    printf("Subtraction of 2 and 5 :%d\n",result3);
    printf("Mod of 2 and 5 :%d\n",result4);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}
