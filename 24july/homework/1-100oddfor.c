#include<stdio.h>
int main()
{
    int num=1;
    for(;num<=100;num++)
    {
        if(!(num%2==0))
            printf("%d ",num);
    }
    return 0;
}
