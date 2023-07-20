#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("enter a number:");
    scanf("%d",&num);
    while(num>0)
       {rem=num%10;
       printf("%d\n",rem);
       rev=rev*10+rem;
       num=num/10;
       }
       printf("Reverse : %d",rev);
    return 0;
}
