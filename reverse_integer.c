#include<stdio.h>

int main() {
	int num,rev=0,rem;
	scanf("%d",&num);
	printf("The entered number is:%d",num);
	while(num!=0)
	{
	rem=num%10;
	rev=(rev*10)+rem;
	num=num/10;
	}
	printf("\nThe reversed number is:%d",rev);
	return 0;
}
