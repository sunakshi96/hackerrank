#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//method to seive out all the prime numbers
int seive(int n)
{//data structure to store the prime numbers.
    int isPrime[n+1];
//loop to initialize all the prime numbers equal to the number itself;
    for(int i=0;i<=n;i++)
    {	
	isPrime[i]=i;
    }
 //since 0 and 1 is not a prime number hence they are marked 0.
    isPrime[0]=0;
    isPrime[1]=0;
//loop to check if the number is prime or not.
    for(int i=2;i*i<=n;i++)
    {
	if(isPrime[i]!=0)
	{
		for(int j=i*i;j<=n;j=j+i)
		isPrime[j]=0;
	}
    }
    int product=1,count=0,max=0,j;
//loop to check for each number less than the given for the unique prime factors...
    for(int i=2;i<=n;i++)
    {	j=2;
	while(true)
	{	/*if(product>=n)
		break;
		*/
		
		if(isPrime[j]!=0)
		{
//		if(product*isPrime[j]>=n)
//		break;
		product=product*isPrime[j];
		j++;
		count++;
		if(product>=n)
		break;
		}
		else j++;
		//if(product>n)
	//	break;
		
	}
	//count--;
	if(max<count)
	max=count;
	count=0;
	

    }
		
	//	if(product<=n)
	//	product *=isPrime[i];	
	
    
	return max; 
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
	int n;
	cin>>n;
/*	for(int i=1;i<=n;i++)
	{
		
	}
*/	cout<<seive(n)<<endl;	
	
    }
    return 0;
}
