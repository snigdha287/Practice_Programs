/*
Chef has to travel to another place. For this, he can avail any one of two cab services.

    The first cab service charges X rupees.
    The second cab service charges Y rupees.

Chef wants to spend the minimum amount of money. Which cab service should Chef take?
Input Format

    The first line will contain T - the number of test cases. Then the test cases follow.
    The first and only line of each test case contains two integers X and Y - the prices of first and second cab services respectively.

Output Format
For each test case, output FIRST if the first cab service is cheaper, output SECOND if the second cab service is cheaper, output ANY if both cab services have the same price.

You may print each character of FIRST, SECOND and ANY in uppercase or lowercase (for example, any, aNy, Any will be considered identical).

Constraints
    1≤T≤100 
    1≤X,Y≤100 

Sample 1:
Input
3
30 65
42 42
90 50

Output
FIRST
ANY
SECOND

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
            if(X<Y)
            {
                System.out.println("FIRST");
            }
            else if(X==Y)
            {
                System.out.println("ANY");
            }
            else
            {
                System.out.println("SECOND");
            }
        }
	}
}
