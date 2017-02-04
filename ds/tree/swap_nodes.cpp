#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1024
//data structures for left and right subtrees.
int l[MAX+1],r[MAX+1],d[MAX+1];
void calculated(int current,int depth)   
{   d[current]=depth;
    if(l[current]>0)
        {
        calculated(l[current],depth+1);
    }
 if(r[current]>0)
     {
     calculated(r[current],depth+1);
 }
    
}
void inorder(int current)
    {
    if(l[current]>0)
        inorder(l[current]);
    cout<<current<<" ";
    if(r[current]>0)
        inorder(r[current]);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>l[i]>>r[i];
    calculated(1,1);
    int t;
    cin>>t;
    while(t--)
        {
        int k;
        cin>>k;
        for(int i=1;i<=n;i++)
            {
            if(d[i]%k==0)
                {
                swap(l[i],r[i]);
                }
        }
        inorder(1);
        cout<<endl;
        }
    return 0;
}
