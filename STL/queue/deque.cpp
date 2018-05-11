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
	 you can push and pop from back and front
	 (two ended container)
	 */
	deque <int> dq;
	
	dq.push_back(10);
	dq.push_back(20);
	dq.push_front(15);
	dq.push_front(30); 
	/*
	push_back(10)
	10 ............
	push_back(20)
	10  20 ........
	push_front(15)
	(15)  10  20 ...
	push_front(30)
	(30) 15  10  20 
	*/
	
	
	
	
	//display		
	
	cout<<"pop from back(left starting from Arr[0]) \n";
	//20 10 15 30
	while(!dq.empty())
	{
	cout<<dq.back()<<"\n";
	dq.pop_back();
	}	
	cout<<"\n";

	
	
	
	
	//********************************************************//
	
	
	/*
	cout<<"pop from front \n";
	//30 15 10 20
	while(!dq.empty())
	{
	cout<<dq.front()<<"\n";
	dq.pop_front();
	}	
	cout<<"\n";
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	









	
	return 0 ;
	
}
