#include<stdio.h>
int main()
{
    int a,b,c;
	printf("Enter the Value of A B and C");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) && (a>c)) //condition
	printf("A is Greater"); //true
	else if((b>a) || (b>c))
    printf("B is Greater");
    else if((c>a) || (c>b))
    printf("C is Greater");  //true
    else
    printf("All are Equal");
	return 0;
}
