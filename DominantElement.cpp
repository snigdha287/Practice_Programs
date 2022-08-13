/*
You are given an array A of length N. An element X is said to be dominant if the frequency of X in A is strictly greater than the frequency of any other element in the A.

For example, if A=[2,1,4,4,4] then 4 is a dominant element since its frequency is higher than the frequency of any other element in AAA.

Find if there exists any dominant element in A.
Input Format

    The first line of input contains a single integer T — the number of test cases. Then the test cases follow.
    The first line of each test case contains an integer N — the size of the array A.
    The second line of each test case contains NNN space-separated integers A1,A2,…,AN denoting the array A.

Output Format

For each test case, output YES if there exists any dominant element in A. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
Constraints

    1≤T≤500 
    1≤N≤1000 
    1≤Ai≤N

Sample 1:
Input
4
5
2 2 2 2 2
4
1 2 3 4
4
3 3 2 1
6
1 1 2 2 3 4

Output
YES
NO
YES
NO
*/

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	int T,N,A[1000];
	cin>>T;
	for (int i = 0; i < T; i++) 
	{
	    cin>>N;
	    array<int, 1001> count{0};
	    for (int j = 0; j < N; j++) 
	    {
	        cin>>A[j];
	        count[A[j]]++;
	    }
	    sort(count.begin(),count.end());
	    if(count[1000]==count[999])
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	}
	return 0;
}

