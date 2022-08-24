//https://www.codechef.com/START53D/problems/CARTRIP
#include <iostream>
using namespace std;

int main() {
	int T,X;
	cin>>T;
	for (int i = 0; i < T; i++) 
	{
	    cin>>X;
	    if(X>=300)
	        cout<<X*10<<endl;
	    else
	        cout<<3000<<endl;
	}
	return 0;
}
