/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner input=new Scanner(System.in);
		int t=input.nextInt();
		int a[]=new int[t];
		int b[]=new int[t];
		int i,p=0,j,sum,count=0;
		for(i=0;i<t;i++)
			a[i]=input.nextInt();
		for(i=0;i<t;i++)
			b[i]=input.nextInt();
		for(i=0;i<t;i++)
		{
			sum=a[i];
			for(j=0;j<t;j++)
			{
				if(sum==a[j])
				{
					if(a[i]==b[j])
					{
						i++;
						count++;
					}
					//else
						
				}
				
			}
		}
		if(count>0)
			System.out.print("YES");
		else
			System.out.print("NO");
		
	}
}                                                                                                                                                                                                                                   
