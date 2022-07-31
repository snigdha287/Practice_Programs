/*
 Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.
Class ID 	Ship Class
B or b	  BattleShip
C or c	  Cruiser
D or d	  Destroyer
F or f	  Frigate

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

Output
For each test case, display the Ship Class depending on ID, in a new line.

Constraints
    1 ≤ T ≤ 1000

Example

Input

3
B
c
D

Output
BattleShip
Cruiser
Destroyer

*/
#include <iostream>
using namespace std;

int main() 
{
    int T;
    char ch;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>ch;
        switch(ch)
        {
            case 'B':case'b':
            {
                cout<<"BattleShip"<<endl;
                break;
            }
            case 'C':case'c':
            {
                cout<<"Cruiser"<<endl;
                break;
            }
            case 'D':case'd':
            {
                cout<<"Destroyer"<<endl;
                break;
            }
            case 'F':case'f':
            {
                cout<<"Frigate"<<endl;
                break;
            }
        }
    }
    
	return 0;
}
