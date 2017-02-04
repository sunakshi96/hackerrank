#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#include<bit/stdch++>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    unsigned long long int sum=0;
    unsigned long long int arr[n];
    for(int i=0;i<n;i++)
        {
	cin>>arr[i];
       // sum=sum+arr[i];
    }
	for(int i=0;i<n;i++)
        {
 //       cin>>arr[i];
        sum=sum+arr[i];
    }

    cout<<sum<<endl;
    return 0;
    
}
