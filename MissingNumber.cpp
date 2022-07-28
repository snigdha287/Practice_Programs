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
