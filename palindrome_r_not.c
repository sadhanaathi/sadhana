#include <stdio.h>
int main()
{
	int num,rev=0,rem;
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	
	if(num==rev){
		printf("Palindrome");
		}
		else
		{
			printf("Not a palindrome");
		}
	return 0;
}
