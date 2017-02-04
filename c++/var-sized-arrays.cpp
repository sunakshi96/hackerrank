#include <iostream>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
	int k;
   	int **arr=new int*[n];
	int **arr2=new int*[q];

	
	//int j=0;
	for(int i=0;i<n;i++)
	{	
		cin>>k;
		arr[i]=new int[k];	
		for(int j=0;j<k;j++)
		cin>>arr[i][j];
		
		
	}
	//cout<<"Hell"<<endl;
	//int i,j;
	for(int i=0;i<q;i++)
	{//cin>>i>>j;
	//	int i,j;
	//	cin>>i>>j;
	//	cout<<arr[i][j]<<endl;
	arr2[i]=new int[2];
//	cout<<arr[i][j]<<endl;
	}
	for(int i=0;i<q;i++)
	{
		cin>>arr2[i][0]>>arr2[i][1];
		cout<<arr[arr2[i][0]][arr2[i][1]]<<endl;
	}
/*
	for(int i=0;i<q;i++)
	{
	cout<<arr[arr2[i][0]][arr2[i][1]]<<endl;
	}	

*/	return 0;
}
