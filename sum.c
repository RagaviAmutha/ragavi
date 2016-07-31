#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,k,curr,max=0;
	int a[100],j,curr1;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	int max_so_far = 0, max_ending_here = 0;
 
    for (int i = 0; i < t; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    printf("%d",max_so_far);
	return 0;
}
