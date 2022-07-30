/*
Chef is making a dish that consists of exactly two ingredients. He has four ingredients A,B,C and D with tastiness a,b,c, and d respectively. He can use either A or B as the first ingredient and either C or D as the second ingredient.

The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.
Input Format

    The first line of input will contain a single integer T, denoting the number of test cases.
    The first and only line of each test case contains four space-separated integers a,b,c, andd — the tastiness of the four ingredients.

Output Format

For each test case, output on a new line the maximum possible tastiness of the dish that chef can prepare.
Constraints

    1≤T≤100
    1≤a,b,c,d≤100

Sample 1:
Input

2
3 5 6 2
16 15 5 4

Output

11
21

*/

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int T,a,b,c,d;
		Scanner s =new Scanner(System.in);
		T= s.nextInt();
		for(int i=0;i<T;i++)
		{
		    a= s.nextInt();
		    b= s.nextInt();
		    c= s.nextInt();
		    d= s.nextInt();
		
		    if(a>b)
		    {
		        if(c>d)
		        {
		            System.out.println(a+c);
		        }
		        else
		        {
		            System.out.println(a+d);
		        }
		    }
		    else
		    {
		        if(c>d)
		        {
		            System.out.println(b+c);
		        }
		        else
		        {
		            System.out.println(b+d);
		        }
		    }
		}
	}
}
