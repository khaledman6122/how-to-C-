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
	 priority_queue is a sorted queue
	 one end only
	 pop from top
	 no push (back,front) because its sorted
	 */
	 
	 
	 
	 
	 
	priority_queue <int> pq;
	//priority_queue <int, cmp> pq;  //cmp is a passed function you make it to sort the queue 
 	
 	
 	
	 /*
	 pq.push();  (50  100  10  20  70  80)
	 pq= 100  80  70  50  20  10
	*/
	 
	pq.push(50);
	pq.push(100);
	pq.push(10);
	pq.push(20);
	pq.push(70);
	pq.push(80);
	
	while(!pq.empty())
	{
		cout<<pq.top()<<"\n";
		pq.pop();
	}
	cout<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	









	
	return 0 ;
	
}
