import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int T,A,B,C,D;
	    Scanner s= new Scanner(System.in);
	    T=s.nextInt();
	    for (int i=0;i<T;i++)
	    {
	   	    A=s.nextInt();
	        B=s.nextInt();	        	
	        C=s.nextInt();
	        D=s.nextInt();
	        if ((A-C)<(B-D))
	            System.out.println("First");
	        else if((A-C)>(B-D))
	            System.out.println("SECOND");
	        else
	            System.out.println("Any");
	    }
	    s.close();
	}
}

