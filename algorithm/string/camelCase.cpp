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


int main()
{
	string s;
	cin >> s;
	int i=0;
	int count =0;
	while(s[i]!='\0')
	{
		if(s[i]>=65 && s[i]<=90)
		{
		
		count++;
		//cout<<count<<endl;
		}
			
		//cout<<count<<endl;	
		i++;
	}
	count++;
	cout<<count<<endl;
	return 0;
}
