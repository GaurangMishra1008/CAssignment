#include<stdio.h>
int main()
{int a=100;
    while(a>=50)
    {
        if(!(a%2==0))
            printf("%d ",a);
        a--;
    }
    return 0;
}
