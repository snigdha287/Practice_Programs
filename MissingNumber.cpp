/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<int> v;
	cin>>n;
	for (int i = 0; i < n-1; i++)
	{
	    cin>>a;
		v.push_back(a);
	}

    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        if((i+1)!=v[i])
        {
            cout<<i+1;
            break;
        }
    }

    return 0;
}
