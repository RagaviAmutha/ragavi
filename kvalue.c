#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a[100],i,n,count=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	n=a[t-1];
	for(i=0;i<t;i++)
	{
		if(a[i]>n)
			count++;
	}
	printf("%d",(t-count));
	return 0;
}
