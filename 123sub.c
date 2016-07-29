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
		String str=input.next();
		String str1=input.next();
		int i,n,m,p=0,flag=0;
		n=str.length();
		m=str1.length();
		for(i=0;i<n;i++)
		{
			String chk=str.substring(i,i+m);
			if(str1.equals(chk))
			{
				p=i;
				flag=1;
				break;
			}
		}
		if(flag==1)
			System.out.print(p);
		else
			System.out.print("-1");
		
	}
}
