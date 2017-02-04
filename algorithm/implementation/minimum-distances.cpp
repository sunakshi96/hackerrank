#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
//#include <unordered_map>

using namespace std;


int main(){
    long n;
    cin >> n;
    vector<long> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
	long d[n];
	for(long i=0;i<n;i++)
	{	d[i]=9999;
	}
	for(long i=0;i<n;i++)
	{
		for(long j=i+1;j<n;j++)
		{
			if(A[i]==A[j])
			{
				if(d[i]>abs(i-j))
					d[i]=abs(i-j);
		
			}
		}
	}
	int min=99;	
	for(long i=0;i<n;i++)
	{
		if(min>d[i]&& d[i]!=0)
		min=d[i];
	}
	if(min!=99)
	cout<<min<<endl;
	else cout<<-1<<endl;
    return 0;
}
