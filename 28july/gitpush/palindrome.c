

#include<stdio.h>
int main()
{
    int num,rev=0,rem,tenp;
    printf("Enter a num");
    scanf("%d",&num);
    tenp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(tenp==rev)
    printf("Palindrome");
    else
    printf("not Palindrome");

    return ;
}

// plain
// num swap
// armstrong
// 10 no max

