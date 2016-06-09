#include <stdio.h>

int main(void) {
	// your code goes here
	int num,div,num1;
	scanf("%d",&num);
	num1=num;
	while(num!=0)
	{
		div=num%10;
		num1=num1*div;
		num=num/10;
	}
	printf("%d",num1);
	return 0;
}
