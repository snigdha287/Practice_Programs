//https://www.codechef.com/START53D/problems/WGHTS
#include <iostream>
using namespace std;

int main() {
	int T,W,X,Y,Z;
    cin>>T;
    for (int i = 0; i < T; i++) 
    {
        cin>>W>>X>>Y>>Z;
        if(W==X||W==Y||W==Z||W==(X+Y)||W==(Y+Z)||W==(Z+X)||W==(X+Y+Z))
            cout<<"Yes"<<endl;
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
