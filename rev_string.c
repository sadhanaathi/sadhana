#include <stdio.h>

int main(void) {
	int i;
	char a[100];
	scanf("%s",a);
	for(i=strlen(a)-1;i>=0;i--)
	{
	printf("%c",a[i]);
	}
	return 0;
}
