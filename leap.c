#include <stdio.h>

int main(void) {
	int yr;
	scanf("%d",&yr);
	((yr%4==0)&&(yr%100!=0)||(yr%400==0))?printf("LEAP YEAR"):printf("NOT A LEAP YEAR");
	return 0;
}
