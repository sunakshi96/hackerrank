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
    string S;
    cin >> S;
    string sos="SOS";
    int length=S.length();
	int count=0;
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(sos[j]!=S[i])
			{	count++;
			//	i++;
			}
			i++;
		}
		i--;
	}
	cout<<count<<endl;
    return 0;
}

