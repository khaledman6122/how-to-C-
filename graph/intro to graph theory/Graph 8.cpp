#include <iostream>
#include <vector>
#define endl "\n"
using namespace std ;
int main ()
{
	//input connections for each vertix
	//output adjcency list as (vector of vector)
	
	/*
   nodes = 3 (0,1,2)
   connections     to
	    2          1,2
	    1          2
	    2          0,1

/////////////////////////////////////////////////
	       connections     to
(node 0)	    2          1,2
(node 1)	    1          2
(node 2)	    2          0,1
	
	
	on your console input the following
	3  n 
	
	2  m
	1  to
	2  to
	
	
	1  m
	2  to
	
	2  m
	0  to
	1  to 
	
	*/
	
	
	
	
	
	
	
	std::ios::sync_with_stdio(false) ;
	int n,to,connections;      
	cin>>n;       //from is (0:n)
	 
	vector <vector<int> > vvec(n) ;  //determine the main vector because we dont push_back()  directly
	for(int i=0;i<n;i++)     //from  
	{
	 cin>>connections;	 //number of to's
	  for(int j=0;j<connections;j++) 
	  { 
	    cin>>to;
	  	vvec[i].push_back(to);
		}	
	} 	
	
	
	for(int i=0;i<n;i++)
	{
		cout<<i<<" | ";
		for(int j=0;j<vvec[i].size();j++)
		{
			cout<<vvec[i][j]<<" ";
		}
		cout<<endl;
		
	}
	
	
	
	
	/*
	//output
	0 | 1 2
	1 | 2
	2 | 0 1
	
	vertix 0  connected to (1,2)
	vertix 1  connected to (2)
	vertix 2  connected to (0,1)
	*/
	
	
	
	
	
	
	
	
	return 0 ;
}
