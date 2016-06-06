#include <stdio.h>

int main(void) {
	char c;
	scanf("%c",&c);
	if(c>=65&&c<=90 || c>=97&&c<=122)
	{
		printf("%c is character\n",c);
	}
	else
	{
		printf("%c is not a character\n",c);
	}
	return 0;
}
