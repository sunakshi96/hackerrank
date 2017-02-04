#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int s,t;
	int a,b;
	int m,n;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	int a1[m];
	int b1[n];
	for(int i=0;i<m;i++)
	{
		cin>>a1[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b1[i];
	}
	int apple=0,orange=0;
	for(int i=0;i<m;i++)
	{
		if((a1[i]+a)>=s && (a1[i]+a)<=t)
		apple++;
	}
	for(int i=0;i<n;i++)
        {
                if((b1[i]+b)>=s && (b1[i]+b)<=t)
                orange++;
		//cout<<"Orange is :"<<orange;
        }
	cout<<apple<<endl;
	cout<<orange<<endl;
    return 0;
}
