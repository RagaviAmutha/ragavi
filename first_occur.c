#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t,i,j,n,max;
	char a[100][100],chk[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%s",a[i]);
	max=strlen(a[0]);
	for(i=0;i<t;i++)
	{
		n=strlen(a[i]);
		if(n<max)
		{
			max=n;
			strcpy(chk,a[i]);
		}
	}
	printf("%s",chk);
	return 0;
}

