#include<stdio.h>
#include<ctype.h>
int main()
{
    int a;
	printf("Enter the Value");
	scanf("%d",&a);
    if(a%3==0 || a%7==0)
        printf("Number is divisible");
    else
        printf("Number is not divisible");
return 0;
}
