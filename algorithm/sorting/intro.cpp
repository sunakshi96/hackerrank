#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int v;
	cin>>v;
	int n;
	cin>>n;
	vector <int> a(n);
	int pos;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==v)
		pos=i;
	}
	cout<<pos<<endl;
	
	
    return 0;
}
