#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int px,py,qx,qy,rx,ry;
	while(n--)
	{
		cin>>px>>py>>qx>>qy;
		if(px<qy)
		{
			rx=qx+(qx-px);
			if(py<qy)
			{
				ry=qy+qy-py;
			}
			else if (py==qy)
				ry=qy;
			else
			{
				ry=qy-(py-qy);
			}
		}
		else if(px==qx)
		{
			rx=qx;
                        if(py<qy)
                        {
                                ry=qy+qy-py;
                        }
                        else if (py==qy)
                                ry=qy;
                        else
                        {
                                ry=qy-(py-qy);
                        }
		}
		else
		{
			rx=qx-(px-qx);
                        if(py<qy)
                        {
                                ry=qy+qy-py;
                        }
                        else if (py==qy)
                                ry=qy;
                        else
                        {
                                ry=qy-(py-qy);
                        }
		}
		cout<<rx<<" "<<ry<<endl;
	}
}
