//https://www.codechef.com/START53D/problems/AVGPROBLEM
#include <iostream>
using namespace std;

int main() {
    int T,A,B,C;
    cin>>T;
    for (int i = 0; i < T; i++) 
    {
        cin>>A>>B>>C;
        float s=A+B;
        if((s/2)>C)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
	return 0;
}
