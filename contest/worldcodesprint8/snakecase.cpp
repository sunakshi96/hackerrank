#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	string s;
	int count=1;
	cin>>s;
	int length=s.length();
	for(int i=0;i<length;i++)
	{
		if(s[i]=='_')
		count++;
	}
	cout<<count<<endl;
    return 0;
}
