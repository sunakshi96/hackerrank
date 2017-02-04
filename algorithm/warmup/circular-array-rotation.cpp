#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n,k,q;
	cin>>n>>k>>q;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int ba[n];
	for(int i=0;i<n;i++)
	{
	ba[(i+k)%n]=arr[i];
	//cout<<arr[i]<<" ";
	}
	while(q--)
	{
		int query;
		cin>>query;
		cout<<ba[query]<<endl;
	}
    return 0;
}

