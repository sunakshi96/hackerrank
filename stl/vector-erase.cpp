#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	vector <int> v1;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		v1.push_back(x);
	}
	int position;
	cin>>position;
	v1.erase(v1.begin()+position-1);
/*
	for(int i=0;i<n-1;i++)
	cout<<v1[i]<<endl;*/
	int start,end;
	cin>>start>>end;
	v1.erase(v1.begin()+start-1,v1.begin()+end-1);
	int size=v1.size();
	cout<<size<<endl;
	for(int i=0;i<size;i++)
        cout<<v1[i]<<" ";
	cout<<endl;
	
    return 0;
}
