#include <stdio.h>
int main(void) {
	int n,hash[100]={0};
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	hash[a[i]]++;
	}
for(i=0;i<n;i++)	
{
	if(hash[i]>1)
	printf("%d",a[i]);
}
return 0;
}
