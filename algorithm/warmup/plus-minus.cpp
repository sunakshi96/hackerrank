
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
	float p=n;
	int arr[n];
	int positive=0,negative=0,zeroes=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>0)
		positive++;
		else if(arr[i]<0)
		negative++;
		else zeroes++;
	}
	
	printf("%.6f\n",positive/p);
	printf("%.6f\n",negative/p);
	printf("%.6f\n",zeroes/p);
    return 0;
}
