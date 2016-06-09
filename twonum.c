#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here

	int i,a[1000],t,j,flag=0,key;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	scanf("%d",&key);
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(a[i]+a[j]==key)
			{
				printf("%d %d",a[i],a[j]);
				flag=1;
				break;
			}
		}
		if(flag==1)
		break;
	}
	return 0;
}
