#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag[n];
	for(int i=0;i<n;i++)
	flag[i]=0;
	for(int i=0;i<n;i++)
	{	if(a[i]==0)
		continue;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && a[i]!=0)
			{
				flag[i]++;
				a[j]=0;
			}
			
		}
		
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<flag[i])
		max=flag[i];
	}
	max++;
	cout<<n-max<<endl;
    return 0;
}

