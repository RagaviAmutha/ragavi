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
    		if(a[i]<0)
    		    printf("%d".a[i]);
    	}
    	for(i=0;i<9;i++)
    	{
    		if(hash[i]==1)
    		printf("%d",i);
    	}
     
     
    	// your code goes here
    	return 0;
    }
     
