#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
//method to seive out all the prime numbers
int seive(unsigned long long int n)
{	
	unsigned long long int product=1,count=0,max=0;

	int prime[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
//loop to check the product and number of max unique prime numbers.
	

	/*while(prime[k]!='\0')
	{
		k++;
	}*/
	
	for(int i=0;i<16;i++)
	{	if(product>n)
		break;
		
		product=product*prime[i];
		if(product<=n)
		{
			
			count++	;
		}
	
		
	}
	return count;
}
int main() 
{
     
    int t;
    cin>>t;
    while(t--)
    {
	 unsigned long long int n;
	//cin>>n;
	scanf("%llu",&n);
	//printf("\n%llu",n);
	 //long long int isPrime[n+1];
//loop to initialize all the prime numbers equal to the number itself;
    /*for(long long int i=0;i<=n;i++)
    {
        isPrime[i]=i;
    }
	for(long long int i=0;i<=n;i++)
    {
        cout<<isPrime[i]<<endl;
    }*/
 //since 0 and 1 is not a prime number hence they are marked 0.
    /*isPrime[0]=0;
    isPrime[1]=0;*/
//loop to check if the number is prime or not.
    /*for(long long int i=2;i*i<=n;i++)

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
*/
	if(n==0||n==1)
	cout<<0<<endl;
	else if(n==2||n==3||n==4||n==5)
	cout<<1<<endl;
	else
	{	

	
	cout<<seive(n)<<endl;
	}
	
    }
    return 0;
}
