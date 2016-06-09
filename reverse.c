
copy

    #include <stdio.h>
    #include<string.h>
    int main(void) {
    	// your code goes here
    	char str[100];
    	int i,len;
    	scanf("%s",str);
    	len=strlen(str)-1;
    	for(i=len;i>=0;i--)
    		printf("%c",str[i]);
    	return 0;
    }
     
