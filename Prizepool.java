/*
In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

Top 1010 participants receive rupees X each.
Participants with rank 11 to 100(both inclusive) receive rupees Y each.
Find the total prize money over all the contestants.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X and Y - the prize for top 10 rankers and the prize for ranks 11 to 100 respectively.
Output Format
For each test case, output the total prize money over all the contestants.

Constraints
1≤T≤1000
1≤Y≤X≤1000

Sample 1:
Input
4
1000 100
1000 1000
80 1
400 30

Output
19000
100000
890
6700
*/

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int T,X,Y;
		Scanner s =new Scanner(System.in);
		T= s.nextInt();
		for(int i=0;i<T;i++)
		{
		    X= s.nextInt();
		    Y= s.nextInt();
		    System.out.println(X*10 + Y*90 );
		}
	}
}
