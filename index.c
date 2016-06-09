#include <stdio.h>
int cmp(const void *a,const void *b){
    return (*(int*)a)-(*(int*)b);
}
int main(void) {
	
	int t,index;
	int a[100],i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
		scanf("%d",&a[i]);
	 qsort(a,n,sizeof(int),cmp);
	scanf("%d",&index);
	for(i=0;i<t;i++)
	{
		if(i==a[i])
			printf("%d",i);
	}
	return 0;
}
