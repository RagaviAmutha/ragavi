/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner input=new Scanner(System.in);
		String str=input.next();
		int t=input.nextInt();
	//	String str1=input.next();
		int i,n,m,p=0,flag=0;
		n=str.length();
		//m=str1.length();
		t=t-1;
		
		for(i=1;i<n;i++)
		{
			System.out.print(str.charAt(0));
			String chk=str.substring(i,i+t);
			System.out.println(chk);
 
		}
	}
}
