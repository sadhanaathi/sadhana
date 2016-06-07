#include <stdio.h>

int main(void) {
	int sum,rem,num1,num2,i,temp;
	scanf("%d %d",&num1,&num2);
	printf("ARMSTRONG NUMBERS BETWEEN %d AND %d ARE:\n ",num1,num2);
	for(i=num1+1;i<=num2;i++)
	{
	temp=i;
	sum=0;
	while(temp!=0)
	{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp=temp/10;
	}
	if(i==sum)
	{
	printf("%d ",i);
	}
	}
	return 0;
}
