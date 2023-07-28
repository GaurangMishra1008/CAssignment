#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp;
    printf("Enter num ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum)
    printf("Number is Armstrong");
    else
    printf("Not armstrong");

    return ;
}

// plain
// num swap
// armstrong
// 10 no max

