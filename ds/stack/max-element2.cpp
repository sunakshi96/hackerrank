#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node 
{
	long long int info=0;
	struct node* next;
	
}*top=NULL;
void push ( long long int item)
{
	struct node* tmp=(struct node*)malloc(sizeof(struct node));
	if(tmp==NULL)
	return;
	if(tmp->info<item)
	{	tmp->info=item;
	tmp->next=top;
	top=tmp;
	}
}
void pop()
{
	struct node* tmp;
	tmp=top;
	top=tmp->next;
	free(tmp);
}
void print()
{
	//unsigned long long int max=0;
	//;
	
	cout<<top->info<<endl;
}
//void pop();
//int print();
int main()
{
	long long int t;
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
                        case 3:print();
                               // cout<<element<<endl;
                                break;

                }

        }
    return 0;
}
