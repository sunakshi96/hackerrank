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

int product(vector <int> a,int n)
{
	int prod=1;
}
int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
	vector <int> x(n+m);
	int x_i=0,count=0;	
//the loop is used to find the element in the set A
	for(int i=0;i<n;i++)
	{	count=0;
		for(int j=0;j<n;j++)
		{
		if((a[i]%a[j])!=0)
		break;
		count=count+1;
		//cout<<"count="<<count<<endl;
		//else break;
		}
		//count--;
		cout<<"count="<<count<<endl;

		if(count==n)
		{
		x[x_i]=a[i];
		cout<<"x["<<x_i<<"] is "<<x[x_i]<<endl;
		x_i++;
		
		}
		
	}
//for printing the array x;

	for(int i=0;i<x_i;i++)
	cout<<x[i]<<endl;
    return 0;
}

