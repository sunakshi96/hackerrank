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
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>arr[i][j];
		
	}
	int sd1=0,sd2=0;
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
		{
			if(i==j)
			sd1=sd1+arr[i][j];
			if((i+j+1)==n)
			sd2=sd2+arr[i][j];
		}
	}
	//cout<<"sd1="<<sd1<<endl;
	//cout<<"sd2="<<sd2<<endl;
	cout<<abs(sd1-sd2)<<endl;
    return 0;
}
