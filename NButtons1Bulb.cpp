/*
Kulyash stays in room that has a single bulb and N buttons. The bulb is initially on.

The initial states of the buttons are stored in a binary string SSS of length NNN — if Si is 0, the i-th button is off, and if Si is 1, the i-th button is on. If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa.

Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string R of length N. He asks you to determine the final state of the bulb.
Input Format

    The first line of input will contain a single integer T , denoting the number of test cases.
    Each test case consists of three lines of input.
        The first line of each test case contains an integer N  — the number of buttons.
        The second line of each test case contains a binary string S — the initial states of the buttons.
        The third line of each test case contains a binary string R — the final states of the buttons.

Output Format

For each test case, output on a new line the final state of the bulb (0 for off and 1 for on).
Constraints

    1≤T≤100 
    1≤N≤100 
    S and R are binary strings, i.e, contain only the characters 0 and 1.

Sample 1:
Input

2
3
000
001
2
00
11
Output

0
1

*/
#include <iostream>
using namespace std;

int main() 
{
    int T,N,count;
    char S[100],R[100];
    cin >> T;
	while(T--)
	{
		count=0;
		cin>>N;
		for (int j = 0; j < N; j++)
			cin>>S[j];
		for (int j = 0; j < N; j++)
		{
			cin>>R[j];
		}
		for (int j = 0; j < N; j++)
		{
			if (S[j] != R[j])
				count++;
		}
		if (count % 2 == 0)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}
