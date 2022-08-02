/*
https://www.hackerrank.com/challenges/three-month-preparation-kit-plus-minus/problem
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100];
    float pv=0,nv=0,z=0;
    cin>>n;
    for (int i = 0; i < n; i++) 
    { 
        cin>>arr[i];
        if(arr[i]>0)
            pv++;
        else if(arr[i]==0)
            z++;
        else if(arr[i]<0)
            nv++;
    }
    cout<<fixed<<setprecision(6)<<pv/n<<endl;
    cout<<fixed<<setprecision(6)<<nv/n<<endl;
    cout<<fixed<<setprecision(6)<<z/n<<endl;
    return 0;
}
