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
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
	float t;
	t=x2-x1;
	t=t/(v1-v2);
	if(t<0)
	cout<<"NO"<<endl;
	else
	{
	if((int )(t*10)%10!=0)
	cout<<"NO"<<endl;
	else if((int)(t*100)%10!=0)
	
	//if((int )(t*10)%10!=0)
	cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
	}
//	else cout<<"YES"<<endl;
	
    return 0;
}
