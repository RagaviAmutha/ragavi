#include<stdio.h>
void main()
{
	char string[100][100][100],verify[100],child[100];
	int row_s,col_s,col,count=0;
	for(row_s=0;row_s<4;row_s++)
	{
		for(col_s=0;col_s<2;col_s++)
		{
			scanf("%s",string[row_s][col_s]);
		}
	}
	scanf("%s",verify);
	for(row_s=0;row_s<4;row_s++)
	{
		for(col_s=0;col_s<2;col_s++)
		{
			//printf("%s ",string[row_s][col_s]);
			if(strcmp(string[row_s][col_s],verify)==0)
			{
				strcpy(child,string[row_s][col_s-1]);
				col=col_s;
			}
		}
		//printf("%s",child);
		//printf("\n");
	}
	for(row_s=0;row_s<4;row_s++)
	{
		if(strcmp(string[row_s][col],child)==0)
	{
		count++;
	//printf("%d %d",row_s,col_s);
		}
	 }
	printf("%d",count);   
}
