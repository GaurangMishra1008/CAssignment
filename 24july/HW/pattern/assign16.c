#include<stdio.h>
int main()
{
    int i=0,j=0,count=1,sum=0;
    for(int a=0;a<=4;a++)
    {
        for(j=0;j<=4;j++)
        {
            sum=sum+count;
            printf("%d",sum);
        }
        printf("\n");
        count++;
        sum=0;


    }
}

