#include <stdio.h>

int main(void) {
	
	int t,index;
	int a[100],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	scanf("%d",&index);
	for(i=0;i<t;i++)
	{
		if(i==a[i])
			printf("%d",i);
	}
	return 0;
}
