//https://www.codechef.com/START53D/problems/ODDPAIRS
#include <iostream>
using namespace std;

int main() 
{   
    int T;
    long N;
    cin>>T;
    for (int i = 0; i < T; i++) 
    {
        cin>>N;
        long v, s=0;
        v=N/2;
        if(N%2==1)
            s=2*v*(v+1);
        else
            s=2*v*v;
        cout<<s<<endl;
        
    }
	return 0;
}
