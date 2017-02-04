#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1000000
long int stack[MAX+1];
//long int max[MAX+1];
//max[0]=0;
int top=-1;
int isFull();
//unsigned long long int max1=0;

unsigned long long int max1(unsigned long long int a,unsigned long long int b)
{
	return (a>b)?a:b;

}
void push(unsigned long long int element)
{
	if(isFull())
	return;
	else
	{
	unsigned long long int item=stack[top];
	top=top+1;
	stack[top]=max1(element,item);
	}
}
int isFull()
{
	if(top==MAX)
	return 1;
	else return 0;
}
int isEmpty()
{
	if(top==-1)
	return 1;
	else return 0;
}
void pop()
{
	if(isEmpty())
	{
	return;
	}
	else 
	{
	top=top-1;
	
	}
}
unsigned long long int print()
{
	unsigned long long int max=0;
/*	for(int i=top;i>=0;i--)
	{
		if(max<stack[i])
			max=stack[i];	
	}*/
	return stack[top];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
	long int t;
	cin>>t;
	while(t--)
	{
		int choice;
		cin>>choice;
		unsigned long long int element;
		switch(choice)
		{
			case 1:cin>>element;
				push(element);
				break;
			case 2:pop();
				break;
			case 3:element=print();
				cout<<element<<endl;
				break;
			
		}

	}
    return 0;
}
