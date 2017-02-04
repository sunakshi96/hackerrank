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
	int energy=100;
	int i=0;
	//while((i+k)%n!=0)
	do
	{
		energy--;
		i=(i+k)%n;
		if(arr[i]==1)
		energy -=2;
		
	}while(i!=0);
	cout<<energy<<endl;
	
    return 0;
}
