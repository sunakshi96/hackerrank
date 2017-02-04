#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	string s;
	cin>>s;
	int hr,min,sec;
	if(s[8]=='P')
	{
		hr=((int)(s[0]))*10+(int)(s[1])+12;
		cout<<hr;
		int i=2;
		while(s[i]!='\0')
		{
			cout<<s[i];
			i=i+1;
		}
		cout<<endl;
	}
	else
	{
		cout<<s<<endl;
	}
    return 0;
}
