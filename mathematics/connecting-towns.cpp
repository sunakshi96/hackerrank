#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	unsigned long long int n,pro;
	cin>>t;
	while(t--)
	{
		//int n;
		cin>>n;
		n=n-1;
		pro=1;
		while(n--)
		{
			int p;	
			cin>>p;
			pro=pro*p;
			pro=pro%1234567;
				
		}
		cout<<pro<<endl;
		
	}
    return 0;
}
