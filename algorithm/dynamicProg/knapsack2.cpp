#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void count(int s[],int m,int n)
{
	int grid[n+1][m];
	for(int i=0;i<m;i++)
		grid[0][i]=1;
	for(int i=1;i<n+1;i++)
	{
		for(int j=0;j<m;j++)
		{
			int x=(i-s[j]>=0)? grid[i-s[j]][j]:0;
			int y=(j>=1)? grid[i][j-1]:0;
			//if((x+y)<grid[i][j-1])
				grid[i][j]=x+y;
			//else grid[i][j]=grid[i][j-1];
		}
	}
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m;j++)
			cout<<grid[i][j]<<" ";
		cout<<endl;
	}int count=0;
	for(int i=n;i>=1;i--)
	{
		if(grid[i][m-1]!=0)
		{
			cout<<i<<endl;
			count++;
			break;
			
		}
	}
	if(count==0)
		cout<<0<<endl;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	 	count(arr,n,k);		
	}
    return 0;
}
