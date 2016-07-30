#include <stdio.h>

int main(void) {
	// your code goes here
	int hash[26]={0},i,n,max=0;
	char str[100];
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
		hash[str[i]-'a']++;
	for(i=0;i<n;i++)
	{
		if(hash[str[i]-'a']>max)
		max=hash[str[i]-'a'];
	}
	
	//printf("%d",max);
	while(max>0)
	{
		for(i=0;i<n;i++)
		{
			if(hash[str[i]-'a']==max)
			{
				printf("%c",str[i]);
				hash[str[i]-'a']=0;
			}
		}
		max--;
	}
	return 0;
}
