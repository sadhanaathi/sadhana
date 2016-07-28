#include <stdio.h>

int main(void) {
	 int n1,n2,rev=0,rem,count=0,i;
	 scanf("%d %d",&n1,&n2);
	 //num1=n1;
	 int key;
	 for(i=n1;i<=n2;i++)
	{
		key=i;
	 	while(key!=0)
	 	{
	 	
	 		rem=key%10;
	 		rev=(rev*10)+rem;
	 		key=key/10;
	 		
	 	}
	 	
	 	if(i==rev)
	 	{
	 	
	 		count++;
	 		printf("%d ",i);
	 	}
	 	rev=0;
	 }
	 printf("\n%d",count);
	return 0;
}
