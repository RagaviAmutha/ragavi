#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here

	int i,a[1000],t,j,max=0,curr;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	for(i=0;i<t;i++)
	{
		curr=a[i];
		for(j=i+1;j<=t;j++)
		{
			curr=curr+a[j];
		//	printf("%d ",curr);
			if(curr>max)
			max=curr;
		}
	}
	printf("%d",max);
	return 0;
}
