/*
Chef wants to rent a car to travel to his restaurant which is N kilometers away. He can either rent a petrol car or a diesel car.

One litre of petrol costs X rupees and one litre of diesel costs Y rupees. Chef can travel AAA kilometers with one litre of petrol and BBB kilometers with one litre of diesel.

Chef can buy petrol and diesel in any amount, not necessarily integer. For example, if X=95 Chef can buy half a litre of petrol by paying 95/2=47.5 rupees.

Which car should the chef rent in order to minimize the cost of his travel?
Input Format

    The first line of input will contain a single integer T, denoting the number of test cases.
    The first and only line of each test case contains 555 space-separated integers, N,X,Y,A and B - distance that chef needs to travel, the per litre prices of petrol and diesel and the distance chef can travel using one litre of petrol and diesel respectively.

Output Format

For each test case, output on a new line PETROL if the cost of travel is less using petrol car, DIESEL if the cost of travel is less using diesel car or ANY if cost of travel is same in both the cases.

You may print each character of the string in either uppercase or lowercase (for example, the strings PETrol, petrol, Petrol, and PETROL will all be treated as identical).
Constraints

    1≤T≤100 
    1≤N,x,y,a,b≤100 
Sample 1:
Input
4
20 10 8 2 4
50 12 12 4 3
40 3 15 8 40
21 9 9 2 9

Output
DIESEL
PETROL
ANY
DIESEL

*/
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		 int T;
		 Scanner s=new Scanner(System.in);
		 T=s.nextInt();
		 for(int i=0;i<T;i++)
		 {
		     float N,p,d;
		     int x,y,a,b;
		     N=s.nextFloat();
		     x=s.nextInt();
		     y=s.nextInt();
		     a=s.nextInt();
		     b=s.nextInt();
		     p=x*(N/a);
		     d=y*(N/b);
		     if(p<d)
		        System.out.println("PETROL");
		     else if(p==d)
		        System.out.println("ANY");
		     else
		        System.out.println("DIESEL");
		 }
		 s.close();
	}
}
