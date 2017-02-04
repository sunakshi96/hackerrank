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
    string s;
    cin >> s;
    long n;
    cin >> n;
	int length=s.length();
	//cout<<"length="<<length<<endl;
	if(n>length)
	{
	int count=0;
	for(int j=0;j<length;j++)
	{
		if(s[j]!='a')
		count++;
	}
	if(count==0)
	{
		cout<<n<<endl;
	}
	else
	{	count=0;
		/*for(int i=0;i<n;i++)
		{
			for(int j=0;j<length;j++)
			{
				if(s[j]=='a')
				{
					count++;
				}
				i++;
				if(i==n)
				break;
				//cout<<"i="<<i<<endl;
			}
			if(i==n)
			break;	
			i--;
			//cout<<"i="<<i<<endl;
		}
		cout<<count<<endl;
		*/
		for(int i=0;i<length;i++)
		{
			if(s[i]=='a')
			count++;		
		}
		//cout<<"Length ="<<length<<endl;
		//cout<<"n="<<n<<endl;
		long num=ceil(n/length);
		
		//cout<<"num="<<num<<endl;
		//long num2=n%length;
		//cout<<"num2="<<num2<<endl;
		num=num*count;
		long num2=n%length;
		for(int i=0;i<num2;i++)
		{
			if(s[i]=='a')
			num++;
		}
		cout<<num<<endl;
	}
	}
	else 
	{	int count=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='a')
				count++;
		}
		cout<<count<<endl;
	}
    return 0;
}

