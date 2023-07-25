
#include<stdio.h>
int swap1(int a,int b)
{
    printf("\n\nSwap1\n\nValue of a = %d value of b= %d\n",a,b);
a=b+a;
b=a-b;
a=a-b;
printf("Value of a = %d value of b= %d",a,b);
return 0;
}
int swap2(int a,int b)
{
    int c;
    printf("\n\nSwap2\n\nValue of a = %d Value of b = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Value of a = %d Value of b = %d\n",a,b);
    return 0;
}
int swap3(int a,int b)
{
    printf("\n\nSwap3\n\nvalue of a : %d value of b : %d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("value of a : %d value of b : %d",a,b);
    return 0;
}
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    swap1(a,b);
    swap2(a,b);
    swap3(a,b);
    return 0;
}

