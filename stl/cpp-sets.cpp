#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	set <int>st;
	int query;
	cin>>query;
	while(query--)
	{
		int x;
		cin>>x;
		int element;
		set <int> :: iterator itr;
		switch(x)
		{
			case 1:cin>>element;
				st.insert(element);
				break;
			case 2:cin>>element;
				st.erase(element);
				break;
			case 3:cin>>element;
				itr=st.find(element);
				if(itr==st.end())
				cout<<"No "<<endl;
				else cout<<"Yes "<<endl;
		}	
	}
	
    return 0;
}
