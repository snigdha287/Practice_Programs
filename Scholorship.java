import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int R;
		Scanner s=new Scanner(System.in);
		R=s.nextInt();
		if(R>0&&R<51)
		    System.out.println(100);
		else if(R>=51&&R<=100)
		    System.out.println(50);
		else
		    System.out.println(0);
		s.close();
	}
}
