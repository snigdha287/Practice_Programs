#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long> arr;
    long a,min=0,max=0;
    for (int i = 0; i < 5; i++) 
    {
        cin>>a;
        arr.push_back(a);   
    }
    sort(arr.begin(),arr.end());
    for (auto i = arr.begin(); i != arr.end()-1; ++i)
        min+=*i;
    for (auto i = arr.begin()+1; i != arr.end(); ++i)
        max+=*i;
    cout<<min<<" "<<max<<endl;
    return 0;
}
