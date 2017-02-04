#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int h[27];
	for(int i=1;i<=26;i++)
		cin>>h[i];
	string alph="abcdefghijklmnopqrstuvwxyz";
	string s;
	cin>>s;
	int max=0;
	int n=s.length();
	int pos;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(s[i]==alph[j])
			{	pos=j+1;
			    break;
			}
		}
		if(max<h[pos])
			max=h[pos];
	}
	//cout<<"Max="<<max;
	cout<<max*n<<endl;
    return 0;
}
