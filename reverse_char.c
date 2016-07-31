#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char str[100];
	scanf("%s",&str);
	int i,n;
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		if(str[i]!=str[i-1])
			printf("%c",str[i]);
		
	}
	
	return 0;
}
