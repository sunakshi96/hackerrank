#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		arr2[i]=arr[(i+d)%n];
		cout<<arr2[i]<<" ";
	}
	cout<<endl;
	

    return 0;
}

