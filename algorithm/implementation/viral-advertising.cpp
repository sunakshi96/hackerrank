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
	int sum=0;
	int begin=5;
	for(int i=1;i<=n;i++)
	{
		begin=floor(begin/2);
		sum=sum+begin;
		begin=begin*3;
	}
	cout<<sum<<endl;	
    return 0;
}
