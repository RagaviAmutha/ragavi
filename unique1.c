    #include <stdio.h>
    int main(void) {
    	int i,a[100];
    	int n,hash[256]={0};
    	scanf("%d",&n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&a[i]);
    		if(a[i]>0)
    		hash[a[i]]++;
    	
    	}
    	for(i=0;i<n;i++)
    	{
    		if(hash[a[i]]>0)
    		printf("%d",a[i]);
    		if(a[i]<0)
    		    printf("%d".a[i]);
    	}
     
     
    	// your code goes here
    	return 0;
    }
     
