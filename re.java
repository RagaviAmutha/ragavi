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
		String str=input.nextLine();
		String a[]=str.split(" ");
		int i;
		for(i=0;i<a.length;i++)
		{
			if(i%2==0)
			{
				String buffer = new StringBuffer(a[i]).reverse().toString();
       			System.out.print(buffer+" ");
			}
			else
				System.out.print(a[i]+" ");
		}
	}
}
