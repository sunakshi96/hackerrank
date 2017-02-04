#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned long long int power(unsigned long long int n,int m)
{
	unsigned long long int pow=1;
	while(m--)
	pow=pow*n;
	return pow;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	cin>>t;

 
unsigned long long int p,n;
	p=pow(10,9)+7;
	//cout<<p<<endl;
	while(t--)
	{
	//	unsigned long long int n;
		scanf("%llu",&n);
		//n=power(n,2);
		//n=trunc(n);
		//n=trunc(n);
		//n=(long int)n;
		//p=(unsigned long long int)p;
		//cout<<"n="<<n<<",p="<<p<<endl;
		n=n%p;
		n=power(n,2);
		n=n%p;
		cout<<n<<endl;
		
	}
    return 0;
}
