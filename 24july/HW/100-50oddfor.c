
#include<stdio.h>
int main()
{
    for(int a=100;a>=50;a--)
    {
        if(!(a%2==0))
            printf("%d ",a);
    }
    return 0;
}
