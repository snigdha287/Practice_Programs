/*
Chef and Chefina are at positions X and Y on a number line.

They both love badminton.

It is known that badminton courts are located at every integer point.

They want to find a court such that the maximum distance travelled by either of them is minimized.

Formally, suppose they choose the badminton court at position Z. You need to find the minimum value of max⁡(∣X−Z∣,∣Y−Z∣) across all possible choices of Z. Here, |X|denotes absolute value of X.

Report this minimum value.

Input Format
    The first line of input will contain a single integer T, denoting the number of test cases.
    Each test case consists of two space-separated integers X and Y.

Output Format
For each test case, output the minimum possible value of max⁡(∣X−Z∣,∣Y−Z∣) .

Constraints
    1≤T≤1000 
    1≤X,Y≤1000 
    X≠Y 

Sample 1:
Input
4
3 5
7 6
1 10
63 31

Output
1
1
5
16

*/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()
{
    int T,X,Y;
    float z;
    cin >>T;
    for (int i = 0; i < T; i++)
    {
        cin>>X>>Y;
        z=abs(X-Y);
        cout<<ceil(z/2)<<endl;
    }
	return 0;
}
