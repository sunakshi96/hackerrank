#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
//create a double ended queue ,Qi that will stor the indexes of useful elements in every window and it will maintain
//a decreasing order of values from the rear Qi, i.e., arr[Qi.front()] to arr[Qi.back()] are sorted in decreasing order.
	deque<int> Qi(k);
//process first k(or first window) elements of array.
	int i;    
	for(i=0;i<k;i++)
	{
		//for every element the previous smaller elements are useless so remove them from Qi.
		while(!Qi.empty() && arr[i]>=arr[Qi.back()])
		Qi.pop_back();//remove from rear.
		//Add new element at rear of queue.
		Qi.push_back(i);
			
	}
	//process rest of the elements, i.e, from arr[k] to arr[n-1]
	for(i=k;i<n;i++)
	{
		//the element at the front of the queue is the largest element of the previous window so print it.
		cout<<arr[Qi.front()]<<" ";
		//remove all the elements that are out  of the window..
		while(!(Qi.empty()) && Qi.front()<=i-k)
		Qi.pop_front();//remove from the front of the queue.
		//remove all the elements smaller than the currently being added element 
		while(!(Qi.empty()) && arr[i]>=arr[Qi.back()])
		Qi.pop_back();
		//Add current element at the rear of Qi.
		Qi.push_back(i);
	}
	//Print the maximum element of the last window.
	cout<<arr[Qi.front()]<<endl;
    
}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
