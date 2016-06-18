        #include<stdio.h>
          int main()
        {
           int n,i,hash[100]={0},a[100],max=0;
     
           //printf("No. of ele:");
           scanf("%d",&n);
          // printf("Array ele...\n");
           for(i=0;i<=n;i++)
           {
           scanf("%d",&a[i]);
           if(max<a[i])
           max=a[i];
           }
           //printf("<<<<HASHING>>>>");
           for(i=0;i<=max;i++)
           {
           hash[a[i]]++;
           }
           printf("Repeated ele...");
           for(i=0;i<=max;i++)
           {
           if(hash[i]>1)
           {
           printf("%d ",i);
           break;
           }
           }
     
           return 0;
           }
