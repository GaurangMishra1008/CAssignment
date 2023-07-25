
#include<stdio.h>
int add();
int sub();
int mul();
int div();
int mod();

int main()
{
    int result;
    result=add();
    mul();
    div();
    sub();
    mod();
    return 0;
}
int add()
{
    printf("addition of 2 and 5 :%d\n",2+5);

}

int sub()
{
     printf("Subtraction of 2 and 5 :%d\n",2-5);

}
int mul()
{
    printf("Multiplication of 2 and 5 :%d\n",2*5);

}
int div()
{
     printf("Division of 2 and 5 :%d\n",2/5);

}
int mod()
{
    printf("Mod of 2 and 5 :%d\n",2%5);
}
