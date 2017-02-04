#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int power(int n,int m)
{	if(m==0)
	return 1;
	else
	{
	int product=1;
	while(m--)
	product *=n;
	return product;
	}
}
int reverse(int n)
{

	int m=0;int k=n,i=0;
	while(k>0)
	{
	k=k/10;
	i++;
	}
	
	i=i-1;
	while(n>0)
	{
		m=m+(n%10)*power(10,i);
		n=n/10;
		i--;
		
	}
	return m;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int i,j,k;
	cin>>i>>j>>k;
	int x=i,total=0;
	while(x<=j)
	{
		if(((abs(x-reverse(x)))%k)==0)
		{
		//cout<<x<<endl;;	
		total++;
		//cout<<x;
		}
		x++;
		
	}
	cout<<total<<endl;
	return 0;
}
