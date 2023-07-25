#include<stdio.h>
int evenodd(int a);
int armstrong(int a);
int palindrome(int a);
int reverse(int a);
int prime(int a);
int main()
{
    int inp;
    printf("Enter a Number :");
    scanf("%d",&inp);
    int result;
    int result1;
    int result2;
    int result3;
    int result4;
    int result5;
    result1=evenodd(inp);
    result2=palindrome(inp);
    result3=armstrong(inp);
    result4=prime(inp);
    result5=reverse(inp);
    printf("Reverse of this number =%d",result5);
    if(result1==0)
        printf("\nNumber is Odd");
    else
        printf("\nNumber is Even");
    if(result2==0)
        printf("\nNumber is Not Palindrome");
    else
        printf("\nNumber is Palindrome");
    if(result4==0)
        printf("\nNumber is Not Prime");
    else
        printf("\nNumber is prime");
    if(result3==1)
        printf("\nNumber is Armstrong");
    else
        printf("\nNumber is Not Armstrong");
}
int evenodd(int a)
{
        if(a%2==0)
			return 1;
        else
        return 0;
}
int palindrome(int a)
{
    int temp,rem,rev=0;
    temp=a;
    while(a>0)
       {rem=a%10;
       rev=rev*10+rem;
       a=a/10;

       }
    if(temp==rev)
       return 1;
       else
    return 0;
}
int reverse(int a)
{
    int rem,rev=0;
    while(a>0)
       {rem=a%10;
       rev=rev*10+rem;
       a=a/10;
       }

    return rev;
}
int armstrong(int a)
{
int temp,arm,rem,sum=0,rev,mul;
    temp=a;
    while(a>0)
       {
       rem=a%10;
       sum=sum+rem*rem*rem;
       a=a/10;
       }
    if(temp==sum)
       return 1;
       else
    return 0;

}
int prime(int a)
{
    int i = 2,flag = 1;
    while (i <= a / 2) {
        if (a % i == 0) {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag && a > 1) {
        return 1;
    }
     else {
        return 0;
    }
}


