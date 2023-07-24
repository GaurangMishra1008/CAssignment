#include<stdio.h>
int main()
{
    int i=0,j=0,count=1,sum=0;
    for(int a=1;a<=4;a++)
    {
        for(j=1;j<=4;j++)
        {
           if(!(a%2==0))
            printf("0");
        else
            printf("1");
        }

        printf("\n");

    }
}


