#include<stdio.h>
int main()
{
int arr[10];
int i,j,k=0,n;
scanf("%d",&n);
for(i=0; i<n; i++)
		{
     	scanf("%d",&arr[i]);
		}
    for(i=0; i<n; i++) {
     
     	for(j=i+1;j<n;j++)
     	{
     		if(arr[j]==arr[i])
     		{
     			for(k=j;k<n;k++)
     			{
     			arr[k]=arr[k+1];
     			}
     				n--;
     		}
     		else
     		{
     			j++;
     		}
     	}
     }
     for(i=0;i<n;i++)
     printf("%d ",arr[i]);
return 0;
}
