#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int charge;
	cin>>charge;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(i!=k)
		sum +=arr[i];
	}
	sum=sum/2;
	if(charge-sum==0)
	cout<<"Bon Appetit"<<endl;
	else
	cout<<charge-sum<<endl;
    return 0;
}

