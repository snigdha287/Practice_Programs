import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int T,A,B,A1,B1,A2,B2;
		Scanner s =new Scanner(System.in);
		T= s.nextInt();
		for(int i=0;i<T;i++)
		{
		    A= s.nextInt();
		    B= s.nextInt();
		    A1=s.nextInt();
		    B1=s.nextInt();
		    A2=s.nextInt();
		    B2=s.nextInt();
		    if((A==A1 && B==B1)||(B==A1 && A==B1))
		        System.out.println(1);
		    else if((A==A2 && B==B2)||(B==A2 && A==B2))
		        System.out.println(2);
		    else
		        System.out.println(0);
		}
		s.close();
	}
}
