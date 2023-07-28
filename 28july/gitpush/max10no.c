
#include<stdio.h>=
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    if(a>=b && a>=c && a>=d && a>=e && a>=f && a>=g && a>=h && a>=i && a>=i && a>=j)
    printf("a is greater");
    else if(b>=a && b>=c && b>=d && b>=e && b>=f && b>=g && b>=h && b>=i && b>=j)
    printf("B is Greater");
    else if(c>=a && c>=b && c>=d && c>=e && c>=f && c>=g && c>=h && c>=i && c>=j )
    printf("C is Greater");
    else if(d>=a && d>=c && d>=b && d>=e && d>=f && d>=g && d>=h && d>=i && d>=j )
    printf("D is Greater");
    else if(e>=a && e>=c && e>=d && e>=b && e>=f && e>=g && e>=h && e>=i && e>=j)
    printf("E is Greater");
    else if(f>=b && f>=c && f>=d && f>=e && f>=a && f>=g && f>=h && f>=i && f>=j)
    printf("F is greater");
    else if(g>=a && g>=c && g>=d && g>=e && g>=f && g>=b && g>=h && g>=i && g>=j)
    printf("G is Greater");
    else if(h>=a && h>=b && h>=d && h>=e && h>=f && h>=g && h>=c && h>=i && h>=j)
    printf("H is Greater");
    else if(i>=a && i>=c && i>=b && i>=e && i>=f && i>=g && i>=d && i>=i && i>=j)
    printf("I is Greater");
    else if(j>=a && j>=c && j>=d && j>=b && j>=f && j>=g && j>=h && j>=i && j>=e)
    printf("J is Greater");
    else
    printf("Not Valid");
    return ;
}


