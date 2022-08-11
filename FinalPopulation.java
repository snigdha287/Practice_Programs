import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int T,X,Y,Z;
	    Scanner s= new Scanner(System.in);
	    T=s.nextInt();
	    for (int i=0;i<T;i++)
	    {
	   	    X=s.nextInt();
	        Y=s.nextInt();	        	
	        Z=s.nextInt();
	        System.out.println(X-Y+Z);
	    }
	    s.close();
	}
}
