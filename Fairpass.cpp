/*
Problem

There is a fair going on in Chefland. Chef wants to visit the fair along with his N friends. Chef manages to collect K passes for the fair. Will Chef be able to enter the fair with all his NNN friends?

A person can enter the fair using one pass, and each pass can be used by only one person.
Input Format

    The first line of input will contain a single integer T, denoting the number of test cases.
    Each test case consists of a single line containing two space-separated integers N,K .

Output Format

For each test case, print on a new line YES if Chef will be able to enter the fair with all his N friends and NO otherwise.

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
Constraints

    1≤T≤100 
    1≤N,K≤100 

Sample 1:
Input

4
5 8
6 3
2 2
1 2
Output

YES
NO
NO
YES
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,N,K,O[100];
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N>>K;
	    if(K>N)
      	    // No.of Passes collected-K should be greater than No.of Friends-N 
      	    // No.of passes should be N+1 chef and his N friends
	        O[i]=1;
	    else
	        O[i]=0;
	}
	for(int i=0;i<T;i++)
	{
	    if(O[i]==1)
	        cout<<"YES";
	    else if(O[i]==0)
	        cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
