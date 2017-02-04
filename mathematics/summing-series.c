#include <stdio.h>
#include <math.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	scanf("%d",&t);

	unsigned long long int n,p;
	p=pow(10,9)+7;
	//cout<<p<<endl;
	while(t--)
	{
	//	unsigned long long int n;
		scanf("%llu",&n);
		n=n^2;
		//n=trunc(n);
		n=n%p;
		printf("%llu\n",n);
		
	}
    return 0;
}
