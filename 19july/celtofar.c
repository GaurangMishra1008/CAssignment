#include<stdio.h>
char c;
	float temp;
	float F;
int main()
{
    char c;
	printf("insert C to convert Celcius to Farehent\ninsert f to convert Far to Cel\n");
	scanf("%c",&c);
	if(c=='c')
	{
	printf("Enter the temp");
	scanf("%f",&temp);
	F=temp*1.8+32;
	printf("%f",F);
	}
	else if(c=='f')
    {
	printf("Enter the temp");
	scanf("%f",&temp);
	F=(temp-32)*5/9;
	printf("%f",F);
	}
	else
    printf("Enter Valid Text");
	return 0;
}




