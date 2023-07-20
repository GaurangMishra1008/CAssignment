#include<stdio.h>
int main()
{
    int a,b,c,d,e;
	printf("Enter the Value of A B C D E");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if((a>b) && (a>c) && (a>d) && (a>e)) //condition
	printf("A is Greater"); //true
	else if((b>a) && (b>c) && (b>d) && (b>e)) //condition
    printf("B is Greater");
    else if((c>a) && (c>b) && (c>d) && (c>e)) //condition
    printf("C is Greater");  //true
    else if((d>b) && (d>c) && (d>a) && (d>e))
    printf("D is Greater");
    else if((e>b) && (e>c) && (e>d) && (e>a)) //condition
    printf("E is Greater");
    else
    printf("All are Equal");
	return 0;
}
