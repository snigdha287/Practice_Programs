/*
Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.
Input

    First line contains the number of triples, N.
    The next N lines which follow each have three space separated integers.

Output

For each of the N triples, output one new line which contains the second-maximum integer among the three.
Constraints

    1 ≤ N ≤ 6
    1 ≤ every integer ≤ 10000
    The three integers in a single triplet are all distinct. That is, no two of them are equal. 
*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        vector<int> v;
        int a;
        for (int j = 0; j < 3; j++) 
        {
            cin>>a;
            v.push_back(a);   
        }
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
    
	return 0;
}
