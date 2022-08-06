/*
Chef's coding class is very famous in Chefland.

This year X students joined his class and each student will require one chair to sit on. Chef already has Y chairs in his class. Determine the minimum number of new chairs Chef must buy so that every student is able to get one chair to sit on.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X and Y — the number of students in the class and the number of chairs Chef already has.

Output Format
For each test case, output the minimum number of extra chairs Chef must buy so that every student gets one chair.

Constraints
1≤T≤1000
0≤X,Y≤100

Sample 1:
Input
4
20 14
41 41
35 0
50 100

Output
6
0
35
0
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
		    if(X>Y)
		        System.out.println(X-Y);
		    else
		        System.out.println('0');
		}

	}
}
