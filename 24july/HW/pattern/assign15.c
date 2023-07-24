#include<stdio.h>
int main()
{
    int i,j=1,count=1;
    for(int a=1;a<=5;a++)
    {
        for(;j<=25;j++)
        {printf("%d    ",2*j);
        if(count==5)
        {
           printf("\n"); count=0;
        }
        count++;
        }


    }
}

