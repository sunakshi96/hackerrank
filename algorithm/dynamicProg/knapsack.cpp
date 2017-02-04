#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n;
		//int k;
		cin>>k;
		int s[n];
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		int a[n][k+1];
		for(int i=0;i<n;i++)
		a[i][0]=0;
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<k+1;j++)
			a[i][j]=9999;
		}
		for(int j=1;j<=k;j++)
		{
			int k=1,count=0;
			while(true)
			{	if(k<0) break;
				k=j-s[0];
				count++;
			}
			if(k>0)
				a[0][j]=count;
			else
				a[0][j]=0;

		}

		/*for(int i=1;i<n;i++)
		{
			for(int j=1;j<k+1;j++)
			{
				if(j-s[i]>=0)
				{
					//if(a[i-1][j]>(j/s[i]+j%s[i]))
					//	a[i][j]=j/s[i]+j%s[i];
					int k=j,count=0;
					while(true)
					{
						if(k<0)break;
						if(k==j)
						{
						k=k-s[i];		
						}
					}
				}
				else
				{
					a[i][j]=a[i-1][j];
				}
			}	
		}*/
	
		/*for(int i=k;i>=1;i--)
		{
			if(a[n-1][i]!=9999)
			{
			cout<<i<<endl;
			break;
			}
		}
		 for(int i=0;i<n;i++)
                 {
                        for(int j=1;j<k+1;j++)
                        {
                                if(j-s[i]>=0)
                                {
                                       // if(a[i][j]<(j%s[i]+j%s[i]))
                                         //       a[i][j]=j/s[i]+j%s[i];
					cout<<a[i][j]<<" ";
                                }
		 		cout<<endl;
                        }
                 }*/
		for(int j=1;j<k+1;j++)
		{
			cout<<a[0][j]<<endl;
		}
			
	}
    return 0;
}
