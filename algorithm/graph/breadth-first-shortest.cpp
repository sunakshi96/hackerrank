#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//using namespace std;
#define MAX 1000
#define TEMP 0
#define PERM 1
#define infinity 9999
#define NIL -1
void findpath(int s,int v);
void dijkstra(int s);
int min_temp();
void creategraph();
int n;//denotes the number of vertices in graph..
int adj[MAX][MAX];
int predecessor[MAX];
int pathlength[MAX];
int status[MAX];

using namespace std;
void creategraph()
{	int origin,destin;
	cin>>n;
	int e;
	cin>>e;
	for(int i=1;i<=n;i++)
	{	
		for(int j=1;j<=n;j++)
		{
			adj[i][j]=infinity;
		}	
	}
	for(int i=1;i<=e;i++)
	{
		cin>>origin>>destin;
		adj[origin][destin]=6;
		adj[destin][origin]=6;
	}
		
}
int min_temp()
{
	int i;
	int min=infinity;
	int k=NIL;
	for(int i=1;i<=n;i++)
	{
		if(status[i]==TEMP && pathlength[i]<min)
		{
			min=pathlength[i];
			k=i;
		}	
	}
	return k;
}
void dijkstra(int s)
{
	int i,current;
	for(int i=1;i<=n;i++)
	{
		predecessor[i]=NIL;
		pathlength[i]=infinity;
		status[i]=TEMP;
	}
	pathlength[s]=0;
	while(1)
	{
		current=min_temp();
		if(current==NIL)
		{
			return;
		}
		status[current]=PERM;			
		for(int i=1;i<=n;i++)
		{
			if(adj[current][i]!=0 && status[i]==TEMP)
			{
				if(pathlength[current]+adj[current][i]<pathlength[i])
				{
					predecessor[i]=current;
					pathlength[i]=pathlength[current]+adj[current][i];
				}
			}

		}
	}
/*	for(int i=1;i<=n;i++)
	{	if(i!=s)
		if(adj[s][i]==infinity)
			adj[s][i]=-1;
		cout<<adj[s][i]<<" ";
	}
	cout<<endl;*/

}
/*void findpath(int s,int v)
{
	int i,u;
	int shortdist=0;
	int path[MAX];
	int count=0;
	int w=v;
	while(v!=s)
	{
		count++;
		path[count]=v;
		
		u=predecessor[v];
		shortdist +=adj[u][v];
		v=u;
	}
	count++;
	path[count]=s;
	adj[s][w]=shortdist;
}*/
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	int t;
	cin>>t;
	while(t--)
	{
	creategraph();
	int s;
	cin>>s;
	dijkstra(s);
	/*for(int i=1;i<=n;i++)
	{
		if(i==s)continue;
		findpath(s,i);
	}*/
	for(int i=1;i<=n;i++)
        {       if(i==s)continue;
		
                if(pathlength[i]==infinity)
			{
                        pathlength[i]= -1;
			//cout<<"adj[s][i]=="<<adj[s][i]<<endl;
			}
	
                cout<<pathlength[i]<<" ";
        }
        cout<<endl;	
	}
    return 0;
}

