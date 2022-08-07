import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int T,N,K,A[]=new int[100];
      Scanner s =new Scanner(System.in);
      T= s.nextInt();
      for(int i=0;i<T;i++)
      {
          N= s.nextInt();
          K= s.nextInt();;
          for(int j=0;j<N;j++)
          {
              A[j]=s.nextInt();
              if(A[j]<=K)
              {
                  System.out.print(1);
                  K-=A[j];
              }
              else
                  System.out.print(0);
          }
          System.out.println( );
      }
		s.close();
	}
}
