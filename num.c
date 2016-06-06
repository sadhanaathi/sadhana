#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	printf("Entered number is:%d",n);
	if(n>0)
	{
		printf("\n%d is positive number",n);
	}
	else if(n<0)
	{
		printf("\n%d is negative number",n);
	}
	else
	{
		printf("\n%d is zero",n);
	}
	return 0;
}
