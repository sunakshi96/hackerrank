#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//	vector <int> v1;
	int n;
	cin>>n;
	vector < int> v1(n);
	for(int i=0;i<n;i++)
	{
	cin>>v1[i];	
	}
	int query;
	cin>>query;
	 int q;
	while(query--)
	{
		cin>>q;	
		int max;
		//for(int i=0;i<n;i++)
		//{	max=q;
			/*if( q==v1[i])
			{
				cout<<"Yes "<<i+1<<endl;
				break;
			}
			else
			{
				if(max<v1[i])
				{
				cout<<"No "<<i+1<<endl;	
				break;
				}
			}	*/
			vector<int>::iterator low=lower_bound(v1.begin(),v1.end(),q);
			if(v1[low-v1.begin()]==q)
			cout<<"Yes "<<(low-v1.begin()+1)<<endl;				else
				cout<<"No "<<(low-v1.begin()+1)<<endl;	
		//}
	}
    return 0;
}

