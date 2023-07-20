#include<stdio.h>
int main()
{
    int num,temp,arm,rem,sum=0,rev,mul;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
       {
       rem=num%10;
       rev=rev+rem*rem*rem;
       num=num/10;
       }
    if(temp==rev)
       printf("Armstrong");
       else
        printf("Not Armstrong ");
    return 0;
}

