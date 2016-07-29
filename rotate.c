#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	int a[100],i,d;
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	scanf("%d",&d);
	for(i=d;i<t;i++)
		printf("%d ",a[i]);
	for(i=0;i<d;i++)
		printf("%d ",a[i]);
	return 0;
}
