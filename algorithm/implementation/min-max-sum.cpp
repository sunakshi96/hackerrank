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
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    long  int arr[5];
    arr[0]=a;arr[1]=b;arr[2]=c;arr[3]=d;arr[4]=e;
    for(int i=0;i<5;i++)
    {   int temp=arr[i];
        int j=i;
	while(temp<arr[j-1] && j>0)
	{
	arr[j]=arr[j-1];	
	j=j-1;
	}
	arr[j]=temp;
	//for(int j=0;j<5)
    }
    cout<<arr[0]+arr[1]+arr[2]+arr[3]<<" "<<arr[1]+arr[2]+arr[3]+arr[4]<<endl;
    return 0;
}
