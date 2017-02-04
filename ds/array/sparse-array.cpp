#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
	 {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
	{
		cin>>s[i];	
	}
	int q;
	cin>>q;
	string a[q];
	for(int i=0;i<q;i++)
	{
		cin>>a[i];	
	}
	
	//int s;
	int total[q]={0};
	for(int i=0;i<q;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==s[j])
				total[i]++;	
		}
			
	}
	for(int i=0;i<q;i++)
	cout<<total[i]<<endl;
    return 0;
}

