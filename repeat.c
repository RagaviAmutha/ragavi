#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	int a[100],hash[10]={0};
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	for(i=0;i<t;i++)
		hash[a[i]]++;
	for(i=0;i<t;i++)
	{
			if(hash[i]>1)
				printf("%d",i);
	}
	return 0;
}
