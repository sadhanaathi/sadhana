#include <stdio.h>

int main(void) {
	int sum=0,rem,num,temp;
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+(rem*rem*rem);
		num=num/10;
	}
	(temp==sum)?printf("ARMSTRONG NUMBER"):printf("NOT AN ARMSTRONG NUMBER");
	return 0;
}
