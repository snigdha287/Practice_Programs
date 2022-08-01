/*
In a contest where NNN new users visited the contest,

    A users just saw the problems and didn’t make any submissions and hence won’t get any rating.
    B users who made a submission but could not solve any problem correctly. Thus, after the contest, they will get a rating in the range 800−1000.
    Everyone else could correctly solve at least 1 problem. Thus, they will get a rating strictly greater than 1000 after the contest.

You need to output the number of new users in the contest who, after the contest, will get a rating and also the number of new users who will get a rating strictly greater than 100010001000.
Input Format
    Each input file contains of a single line, with three integers N,A and B - the number of new users, the number of users who just saw the problem and didn't make any submission, and the number of users who made a submission but could not solve any problem correctly.

Output Format
Output two integers separated by a space in a single line - the number of new users who will get a rating at the end of the contest and the number of new users who will get a rating higher than 100010001000.

\Constraints
    2≤N≤1000
    1≤A≤1000
    1≤B≤1000
    A+B≤N

Sample 1:
Input
10 3 2

Output
7 5

*/

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
      int N,X,Y;
      Scanner s =new Scanner(System.in);
      N= s.nextInt();
      X= s.nextInt();
      Y= s.nextInt();
      System.out.println(N-X);
      System.out.println(N-X-Y);
	}
}
