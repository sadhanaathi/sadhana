#include <stdio.h>

int main(void) {
	char c;
	scanf("%c",&c);
	printf("Entered character is:%c",c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("\n%c is vowel",c);
	}
	else
	{
		printf("\n%c is consonant",c);
	}
	return 0;
}
