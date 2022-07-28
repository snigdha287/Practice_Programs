/*
Problem

Recently Chef joined a new company. In this company, the employees have to work for XXX hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for YYY hours (Y<X)(Y \lt X)(Y<X) on Friday. Saturdays and Sundays are holidays.

Determine the total number of working hours in one week.
Input Format

    The first line contains a single integer T — the number of test cases. Then the test cases follow.
    The first and only line of each test case contains two space-separated integers X and  Y — the number of working hours on each day from Monday to Thursday and the number of working hours on Friday respectively.

Output Format

For each test case, output the total number of working hours in one week.
Constraints

    1≤T≤100 
    2≤X≤12 
    1≤Y<X 

Sample 1:
Input

3
10 5
12 2
8 7
Output

45
50
39

*/
#include <iostream>
using namespace std;

int main() {
    int T,X,Y;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>X>>Y;
	    cout<<(4*X)+Y<<"\n";
	}
	return 0;
}
