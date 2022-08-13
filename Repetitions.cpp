/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.

Constraints
1≤n≤10^6

Example
Input:
ATTCGGGA

Output:
3

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    char str[1000000];
    long max=0,l;
    int count[4]={0};
    cin>>str;
    l=strlen(str);
    for (long x=0; x<l; x++)
        str[x]=toupper(str[x]);
    for(long i=0; i<l; i++)
    {
        if(str[i]=='A')
        {
            count[0]++;
            count[1]=0;
            count[2]=0;
            count[3]=0;
            max= count[0]>max ? count[0] : max;
        }
        if(str[i]=='C')
        {
            count[1]++;
            count[0]=0;
            count[2]=0;
            count[3]=0;
            max= count[1]>max ? count[1] : max;
        }
        if(str[i]=='G')
        {
            count[2]++;
            count[1]=0;
            count[0]=0;
            count[3]=0;
            max= count[2]>max ? count[2] : max;
        }
        if(str[i]=='T')
        {
            count[3]++;
            count[1]=0;
            count[2]=0;
            count[0]=0;
            max= count[3]>max ? count[3] : max;
        }
    }
  cout<<max;
  return 0;
}
