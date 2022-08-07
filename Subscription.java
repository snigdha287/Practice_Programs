import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		
	    int T,X;
		Scanner s =new Scanner(System.in);
		T= s.nextInt();
		for(int i=0;i<T;i++)
		{
		    X= s.nextInt();
		    if(X>30)
		        System.out.println("Yes");
		    else
		        System.out.println("No");
		}

	}
}
