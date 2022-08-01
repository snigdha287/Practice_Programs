/*
There are 333 hidden numbers A,B,C.

You somehow found out the values of min⁡(A,B),min⁡(B,C), and min⁡(C,A).

Determine whether there exists any tuple (A,B,C)that satisfies the given values of min⁡(A,B),min⁡(B,C),min⁡(C,A).
Input Format

    The first line of input will contain a single integer T, denoting the number of test cases.
    The first and only line of each test case contains 3 space-separated integers denoting the values of min⁡(A,B),min⁡(B,C), and min⁡(C,A).

Output Format

For each test case, output YES if there exists any valid tuple (A,B,C) , and NO otherwise.

You can print each letter of the output in any case. For example YES, yes, yEs will all be considered equivalent.
Constraints

    1≤T≤1000 
    1≤min(A,B),min(B,C),min(C,A)≤10

Sample 1:
Input
3
5 5 5
2 3 4
2 2 4

Output
YES
NO
YES

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    for (int i = 0; i < t; i++) 
    {   
        cin>>a;
        cin>>b;
        cin>>c;
	    vector <int> v;
	    v.push_back(a);
	    v.push_back(b);
	    v.push_back(c);
	    sort(v.begin(),v.end());
	    if(v[0]==v[1])
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
    }
    return 0;
}
