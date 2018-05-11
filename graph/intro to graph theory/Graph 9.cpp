#include <iostream>
#include <vector>
#define endl "\n"
using namespace std ;
int main ()
{
	//input connections and it's cost for each vertix
	//output adjcency list as (vector of vector of pair)
	
	/*
   nodes = 3 (0,1,2)
   connections     (to ,cost )
	    2          (1,44),(2,30)
	    1          (2,13)
	    2          (0,28),(1,50)

/////////////////////////////////////////////////
	       connections     to
(node 0)	    2          1 with cost =44 , 2 with cost =30
(node 1)	    1          2 with cost =13
(node 2)	    2          0 with cost =28,1 with cost =50
	
	
	on your console input the following
	3  n 
	
	2  m
	1  to
    44 cost
	2  to
	30 cost
	
	1  m
	2  to
	13 cost
	
	2  m
	0  to
	28 cost
	1  to 
	50  cost
	*/
		
	std::ios::sync_with_stdio(false) ;
	int n,to,connections,cost;      
	cin>>n;       //from is (0:n)
	 
	vector <vector<pair<int,int> > > vvp(n) ;  //determine the main vector because we dont push_back()  directly
	
	
	for(int i=0;i<n;i++)     //from  
	{
	 cin>>connections;	 //number of to's
	  for(int j=0;j<connections;j++) 
	  { 
	    cin>>to>>cost;
	  	vvp[i].push_back(make_pair(to,cost));
		}	
	} 	
	
	
	for(int i=0;i<n;i++)
	{
		cout<<i<<" | ";
		for(int j=0;j<vvp[i].size();j++)
		{
			cout<<vvp[i][j].first<<" with cost = "<<vvp[i][j].second<<"   ";
		}
		cout<<endl;
		
	}
	
	
	
/*
	//output
		0 | 1 with cost = 44   2 with cost = 30
		1 | 2 with cost = 13
		2 | 0 with cost = 28   1 with cost = 50

////////////////////////////////////////////////////////////////////////	

		vertix 0  connected to (1 with cost = 44 , 2 with cost = 30)
		vertix 1  connected to (2 with cost = 13)
		vertix 2  connected to (0 with cost = 28, 1 with cost = 50)
	*/
	
	
	
	
	
	
	
	
	return 0 ;
}
