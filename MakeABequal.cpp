//https://www.codechef.com/START53D/problems/MAKEABEQUAL
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int T,N;
	long A[100000],B[100000];
	cin>>T;
	for (int i = 0; i < T; i++) 
	{
	    cin>>N;
	    long SumA=0,SumB=0,x=0;
	    for (int j = 0; j < N; j++) 
	    {
	        cin>>A[j];
	        SumA+=A[j];
	    }
	    for (int j = 0; j < N; j++) 
	    {
	        cin>>B[j];
	        SumB+=B[j];
	    }
	    if(SumA==SumB)
	    {
	        for (int j = 0; j < N; j++) 
	        {
	            x+=abs(A[j]-B[j]);
	        }
	        cout<<x/2<<endl;
	    }
	    else
	        cout<<-1<<endl;
	    
	}
	return 0;
}
