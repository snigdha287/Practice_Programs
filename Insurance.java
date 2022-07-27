/*
Chef bought car insurance. The policy of the insurance is:

    The maximum rebatable amount for any damage is Rs X lakhs.
    If the amount required for repairing the damage is ≤X lakhs, that amount is rebated in full.

Chef's car meets an accident and required Rs Y lakhs for repairing.

Determine the amount that will be rebated by the insurance company.
Input Format
    The first line of input will contain a single integer T, denoting the number of test cases.
    The first and only line of each test case contains two space-separated integers X and Y.

Output Format
For each test case, output the amount (in lakhs) that will be rebated by the insurance company.

Constraints
    1≤T≤1000 
    1≤X,Y≤30 

Sample 1:
Input

4
5 3
5 8
4 4
15 12

Output
3
5
4
12
*/

/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Integer T,X,Y,A[];
		Scanner s =new Scanner(System.in);
		T= s.nextInt();
		for (int i = 0; i < T; i++)
		{
			X= s.nextInt();
			Y= s.nextInt();
			if(X<=Y)
				System.out.println(X);
			else if(X>Y)
				System.out.println(Y);
		}
	}
}
