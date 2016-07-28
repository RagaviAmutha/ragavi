#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t,i,n,max=0,n1,j;
	char a[100][100],chk,temp[100][100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",a[i]);
		strcpy(temp[i],a[i]);
	}
	for(i=0;i<t;i++)
	{
		n=strlen(a[i]);
		if(n>max)
		max=n;
	}
//	printf("%d",max);
	for(i=0;i<t;i++)
	{
		chk=a[i][0];
	//	printf("%c",chk);
		n1=strlen(a[i]);
		for(j=n1;j<max;j++)
			a[i][j]=chk;
	}
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(strcmp(a[i],a[j])<0)
			{
				char temp1[100];
				strcpy(temp1,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp1);
				strcpy(temp1,temp[i]);
				strcpy(temp[i],temp[j]);
				strcpy(temp[j],temp1);
				
			}
		}
	}
	for(i=0;i<t;i++)
		printf("%s",temp[i]);
	return 0;
}
