#include <stdio.h>

int main(void) {
	int a[10],i,n,hash[100]={0},max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		max=a[i];
	}
		for(i=0;i<=max;i++)
	{
		hash[a[i]]++;
	}
		for(i=0;i<=max;i++)
	{
		if(hash[i]!=0)
		printf("%d  %d\n",i,hash[i]);
	}
	return 0;
}
