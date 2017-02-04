#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	map <string,int>m;
	int query;
	string name;
	int marks;
	cin>>query;
	map<string ,int> ::iterator itr;
	while(query--)
	{	
		int choice;
		cin>>choice;
		switch(choice)
		{
			case 1:cin>>name>>marks;
				//map<string ,int> ::iterator itr;
				itr=m.find(name);
				if(itr!=m.end())
				{
				marks=marks+m[name];
				m.erase(name);
				m.insert(make_pair(name,marks));
				}
				else
				m.insert(make_pair(name,marks));
				break;	
			case 2:cin>>name;
				m.erase(name);
				break;
			case 3://map<string ,int> ::iterator itr;
				cin>>name;
				itr=m.find(name);
				if(itr==m.end())
				cout<<"0 "<<endl;
				else cout<<m[name]<<endl;
				break;
		}	
	}

    return 0;
}

