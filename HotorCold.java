/*
Chef considers the climate HOT if the temperature is above 20, otherwise he considers it COLD. You are given the temperature C, find whether the climate is HOT or COLD.
Input Format

    The first line of input will contain a single integer T, denoting the number of test cases.
    The first and only line of each test case contains a single integer, the temperature C.

Output Format

For each test case, print on a new line whether the climate is HOT or COLD.

You may print each character of the string in either uppercase or lowercase (for example, the strings hOt, hot, Hot, and HOT will all be treated as identical).
Constraints

    1≤T≤50
    0≤C≤40

Sample 1:
Input

2
21
16

Output

HOT
COLD

*/


import java.util.*;
import java.lang.*;
import java.io.*; 

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int T,C;
		Scanner s=new Scanner(System.in);
		T=s.nextInt();
		for(int i=0;i<T;i++)
		{
		    C=s.nextInt();
		    if(C>20)
		        System.out.println("HOT");
		    else
		        System.out.println("COLD");
		}
	}
}
