#include <stdio.h>

int main(void) {
	// your code goes here
	int t,index;
	int a[100],i,j,k;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);

	for(i=0;i<t;i++)
	{
		for(j=0;j<t;j++)
		{
			for(k=0;k<t;k++)
			{
				if(a[i]+a[j]==a[k])
					printf("%d %d %d",i,j,k);
			}
		}
	}
	return 0;
}
