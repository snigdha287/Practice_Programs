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
