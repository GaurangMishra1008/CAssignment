#include<stdio.h>
int main()
{
    int num,rem,rev=0,i;
    printf("enter a number:");
    scanf("%d",&num);
    while(num>0)
       {
       num=num/10;
       i++;
       }
       printf("%d digit",i);
    return 0;
}

