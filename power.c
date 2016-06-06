#include <stdio.h>
int pow(int,int);
int base,exponent,value=1;
int main(void) 
{

	scanf("%d %d",&base,&exponent);
	pow(base,exponent);
	printf("%d to the power of %d is:%d",base,exponent,value);
	return 0;
}
	int pow(base,exponent)
	{
		while(exponent!=0)
		{
			value=value*base;
			exponent--;
		}
	}
