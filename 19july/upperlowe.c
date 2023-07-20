
#include<stdio.h>
int main()
{
    char c;
	printf("Enter the character");
	scanf("%c",&c);
	if(c>=65 && c<=91)
    printf("%c is UpperCase",c);
    else if(c>=97 && c<=122)
    printf("%c is LowerCase",c);
    else
    printf("Character is Not Valid");
    return 0;
}
