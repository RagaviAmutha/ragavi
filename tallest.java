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
		int i;
		for(i=0;i<t;i++)
			a[i]=input.nextInt();
		int n=input.nextInt();
		Arrays.sort(a);
		System.out.print(a[t-n]);
		
	}
}
