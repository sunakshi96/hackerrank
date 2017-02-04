#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
//method to seive out all the prime numbers
int seive(long long int n,long long int prime[])
{//data structure to store the prime numbers.
 /*   unsigned long long int isPrime[n+1];
//loop to initialize all the prime numbers equal to the number itself;
    for(unsigned long long int i=0;i<=n;i++)
    {	
	isPrime[i]=i;
    }
 //since 0 and 1 is not a prime number hence they are marked 0.
    isPrime[0]=0;
    isPrime[1]=0;
//loop to check if the number is prime or not.
    for(unsigned long long int i=2;i*i<=n;i++)
    {
	if(isPrime[i]!=0)
	{
		for(unsigned long long int j=i*i;j<=n;j=j+i)
		isPrime[j]=0;
	}
    }*/
	long long int product=1,count=0,max=0;

//loop to build another array of primes.
/*	unsigned long long int prime[n],k=0;
 	for(unsigned long long int i=0;i<=n;i++)
	{	
		if(isPrime[i]!=0)
		{
			prime[k]=isPrime[i];
			k++;
			//cout<<prime[k]<<endl;
		}
		
	} */
//loop to check the product and number of max unique prime numbers.
	long long int k=0;

	while(prime[k]!='\0')
	{
		k++;
	}
	//cout<<"Length of prime array is : "<<k<<endl;
	for(long long int i=0;i<k;i++)
	{	if(product>n)
		break;
		
		product=product*prime[i];
		if(product<=n)
		{
			//product=product*prime[i];
			count++	;
		}
	
		//cout<<"Count is :"<<count<<" product="<<product<<endl;
	}
	return count;
}
int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
	 long int n;
	cin>>n;
/*	for(int i=1;i<=n;i++)
	{
		
	}
*/	
	 long long int isPrime[n+1];
//loop to initialize all the prime numbers equal to the number itself;
    for(long long int i=0;i<=n;i++)
    {
        isPrime[i]=i;
    }
 //since 0 and 1 is not a prime number hence they are marked 0.
    isPrime[0]=0;
    isPrime[1]=0;
//loop to check if the number is prime or not.
    for(long long int i=2;i*i<=n;i++)

    {
        if(isPrime[i]!=0)
        {
                for(long long int j=i*i;j<=n;j=j+i)
                isPrime[j]=0;
        }
    }
	 long long int prime[n],k=0;
        for( long long int i=0;i<=n;i++)
        {       
                if(isPrime[i]!=0)
                {
                        prime[k]=isPrime[i];
                        k++;
                        //cout<<prime[k]<<endl;
                }

        }
	cout<<"Length of prime array is : "<<k<<endl;

	if(n==0||n==1)
	cout<<0<<endl;
	else if(n==2||n==3||n==4||n==5)
	cout<<1<<endl;
	else
	{	
//	int max=0;
	/*for(int i=6;i<=n;i++)
	{	
		if(max<seive(i))
			max=seive(i);
	}
	cout<<max<<endl;*/
	
	cout<<seive(n,prime)<<endl;
	}
	
    }
    return 0;
}
