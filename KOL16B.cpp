/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int n;
		int t;
		t = sc.nextInt();
		for(int i=0;i<t;i++)
		{
			int s = sc.nextInt();
			int a[] = new int[s];
			int b[] = new int[s];
			for(int j=0;j<s;j++)
			{
				n = sc.nextInt();
			    int n1 = n<<16;
			    n1 = n1>>>16;
			    int n2 = n>>16;
			    a[j] = n1;
			    b[j] = n2;
			}
			System.out.println("Case "+(i+1)+":");
			for(int j=0;j<s;j++)
				System.out.print(a[j] + " ");
			System.out.println();
			for(int j=0;j<s;j++)
				System.out.print(b[j] + " ");
			System.out.println();
		}
	    
		sc.close();
	}
}
