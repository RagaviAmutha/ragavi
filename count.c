#include <stdio.h>

int main(void) {
	// your code goes here
	int t,max=999;
	scanf("%d",&t);
	int a[100],i,d,d1,j;
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	scanf("%d %d",&d,&d1);
	for(i=0;i<t;i++)
	{
		int count=0;
		if(a[i]==d||a[i]==d1)
		{
			for(j=i;j<t;j++)
			{
				if(a[j]==d1||a[j]==d)
					break;
				count++;
			}
		}
		if(count<max&&count!=0)
			max=count;
		//printf("%d",count);
	}
	printf("%d",max);

	return 0;
}
