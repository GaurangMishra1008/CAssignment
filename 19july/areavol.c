#include<stdio.h>
int main()
{
    char c;
    char ch1;
    printf("Enter the Your choice\n v for Volume\n a for Area");
    scanf("%c",&c);
    if(c=='v' || c=='V')
    {
        printf("Enter the Your choice\n S for Square\n T for Triangle\n R for Rectangle");
        scanf("%c",&c);
        if(c=='S' || c=='s')
        {

        }
        else if(c=='T' || c=='t')
        {

        }
        else if(c=='R' || c=='r')
        {

        }
    }
    if(c=='A' || c=='a')
    {

        printf("Enter the Your choice\n S for Square\n T for Triangle\n R for Rectangle");
        scanf("%c",&ch1);
        if(ch1=='S' || ch1=='s')
        {

        }
        if(c=='T' || c=='t')
        {
            int b,h;
            printf("Enter Base And Height");
        scanf("%d%d",&b,&h);
            printf("Area of triangle : %d",1/2*b*h);
        }
        if(c=='R' || c=='r')
        {

        }
    }
    else
        {

        }
    return 0;
}
