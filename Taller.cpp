/*
Alice and Bob were having an argument about which of them is taller than the other. Charlie got irritated by the argument, and decided to settle the matter once and for all.

Charlie measured the heights of Alice and Bob, and got to know that Alice's height is X centimeters and Bob's height is Y centimeters. Help Charlie decide who is taller.

It is guaranteed that X≠Y .
Input Format

    The first line of input will contain an integer T — the number of test cases. The description of T test cases follows.
    The first and only line of each test case contains two integers X and Y, as described in the problem statement.

Output Format

For each test case, output on a new line A  if Alice is taller than Bob, else output B. The output is case insensitive, i.e, both A and a will be accepted as correct answers when Alice is taller.
Constraints

    1≤T≤1000
    100≤X,Y≤200 
    X≠Y 

Sample 1:
Input
2
150 160
160 150

Output
B
A
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
          int T,X,Y;
          Scanner s =new Scanner(System.in);
          T= s.nextInt();
        	for(int i=0;i<T;i++)
       		{
        			X= s.nextInt();
        			Y= s.nextInt();
           		 	if(X>Y)
               	 		System.out.println("A");
        			else
            			System.out.println("B");
        	}

	    }
}
