#include<stdio.h>
int main()
{
    int a,b,c,d,result;
    printf("Enter the value for a -(b*c ) +d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    result=a-(b*c)+d;
    printf("%d",result);
    return 0;
}
