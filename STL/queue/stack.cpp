#include <iostream>
#include <stack>
#include <algorithm>
#include <numeric>   //accumulate
#define all(v)  (v.begin()),(v.end())     //#define all(v)  ((v).begin()),((v).end())
#define sz(v)   ((int)(v).size())        //#define sz(v)   ((int)(v.size())) 
using namespace std ;
   
int main ()
{
	  
	 
	stack <int> S;
	
	S.push(12);
 	S.push(13);
 	S.push(15);
	S.push(17);
	S.push(11);
	/*
	push 12   13  15  17  11
	looks like (puts some books up to one another or filling up something from down to up like a bottle of water)
	
	push 12       push 13		 push 15 		push 17		 push 11
	.				.				.				.			11
	.				.				.				17			17
	.				.				15				15			15	
	.				13				13				13			13
	12				12				12				12			12		
	*/
	while(!S.empty())
	{
		cout<<S.top()<<"\n";
		S.pop();
	}
	cout<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	









	
	return 0 ;
	
}
