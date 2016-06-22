#include <stdio.h>

int main(void) {
	int i,n,hash[26]={0},max=0;
	char a[100];
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
		if(a[i]>=65 && a[i]<=91)
		hash[a[i]-65]++;
		else if(a[i]>=97 && a[i]<=122)
		hash[a[i]-97]++;
	}
		for(i=0;i<26;i++)
	{
		if(hash[i]>=1)
		printf("%c  %d\n",i+97,hash[i]);
	}
	return 0;
}
