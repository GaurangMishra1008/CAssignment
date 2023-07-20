#include<stdio.h>
int main()
{
	char c;
	printf("Enter the character");
	scanf("%c",&c);
	if(c=='f' || c=='F')
    printf("Female");
    else if(c=='m' || c=='M')
    printf("Male");
    else
    printf("Other");
	return 0;
}
