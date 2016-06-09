#include <stdio.h>
 
int main(void) {
	// your code goes here
	int i,j;
	char a[100];
	char temp,temp2;
	scanf("%s",a);
   int l=strlen(a);
   for(i=0,j=l-1;i<j;i++,j--)
   {
   	temp=a[i];
   	 //printf("%c",a[i]);
    temp2=a[j];
     //printf("%c",a[j]);
    a[i]=temp2;
    a[j]=temp;
   }
   printf("%s",a);
	return 0;
}
