import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
	
		Scanner input=new Scanner(System.in);
		String num=input.next();
		int k=input.nextInt();
		char array[]=num.toCharArray();
		Arrays.sort(array);
		for(int i=0;i<array.length-k;i++)
			System.out.print(array[i]);
	}
}
