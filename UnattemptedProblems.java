/*
Our Chef is currently practicing on CodeChef and is a beginner. The count of ‘All Problems’ in the Beginner section is XXX. Our Chef has already ‘Attempted’ YYY problems among them. How many problems are yet ‘Un-attempted’?
Input Format
    The first and only line of input contains two space-separated integers XXX and YYY — the count of 'All problems' in the Beginner's section and the count of Chef's 'Attempted' problems, respectively.

Output Format
Output a single integer in a single line — the number of problems that are yet 'Un-attempted'

Constraints
    1≤Y≤X≤1000

Sample 1:
Input
10 4
Output
6

Sample 2:
Input
10 10
Output
0

Sample 3:
Input
1000 990
Output
10

Sample 4:
Input
500 1
Output
499

*/

import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int X,Y;
		Scanner s =new Scanner(System.in);
		X= s.nextInt();
		Y= s.nextInt();
		System.out.println(X-Y);
	}
}
