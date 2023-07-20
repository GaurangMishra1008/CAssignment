#include<stdio.h>
int main()
{
int inp1,inp2;
printf("Enter two number");
scanf("%d%d",&inp1,&inp2);
    while(inp1<=inp2)
    {
        if(inp1%2==0)
			printf("%d ",inp1);
		inp1++;
    }return 0;
}


