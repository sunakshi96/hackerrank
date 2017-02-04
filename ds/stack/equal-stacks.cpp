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

int  findsum(vector<int> h ,int n)
{	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+h[i];
	}	
	return sum;
}
int main()
{
    int n1;
    int n2;
    int n3;
    cin >> n1 >> n2 >> n3;
    vector<int> h1(n1);
    for(int h1_i = 0;h1_i < n1;h1_i++)
    {
       cin >> h1[h1_i];
    }
    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++)
    {
       cin >> h2[h2_i];
    }
    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++)
    {
       cin >> h3[h3_i];
    }
	int sum1,sum2,sum3;
	sum1=findsum(h1,n1);
	sum2=findsum(h2,n2);
	sum3=findsum(h3,n3);
	//cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
	int min;
	if(sum1<=sum2 && sum1<=sum3)
	min=sum1;
	else if(sum2<=sum3 && sum2<=sum1)
	min=sum2;
	else min=sum3;
	cout<<min<<endl;
    return 0;
}
