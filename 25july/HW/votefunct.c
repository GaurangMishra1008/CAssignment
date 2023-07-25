#include<stdio.h>
int vote(int age);
int main()
{
    printf("Enter your age");
    int age;
    scanf("%d",&age);
    int result;
    result=vote(age);
    if(result==1)
    printf("You are valid");
    else
    printf("You are not valid");
    return 0;
}
int vote(int age)
{

    if(age>=18)
    return 1;
    else
    return 0;

}

int age;
