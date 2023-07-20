#include<stdio.h>
int main()
{
    int a;
	printf("Enter the Value of A");
	scanf("%d",&a);
	if(a>0)//condition
	printf("A is Positive"); //true
    else if(a<0)//condition
	printf("A is Negative");
    else
    printf("Zero");
	return 0;
}
