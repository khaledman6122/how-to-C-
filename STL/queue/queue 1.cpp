#include <iostream>
#include <queue>
#include <algorithm>
#include <numeric>   //accumulate
#define all(v)  (v.begin()),(v.end())     //#define all(v)  ((v).begin()),((v).end())
#define sz(v)   ((int)(v).size())        //#define sz(v)   ((int)(v.size())) 
using namespace std ;
   
int main ()
{
	
	/*
	push from the back only 
	pop from the front only 
	*/
	 
	queue <int> q;
	
	int x,number;
	cout<<"enter queue size ", cin>>x;
	for(int i=0;i<x;i++)
	{
		cin>>number;
		q.push(number);
	}
	
	cout<<"front "<<q.front()<<endl;
	cout<<"back  "<<q.back()<<endl;
	
	
	while(!q.empty())
	{
	cout<<q.front()<<"\n";
	q.pop();
	}	
	cout<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	









	
	return 0 ;
	
}
