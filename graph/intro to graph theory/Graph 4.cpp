#include <iostream>
using namespace std ;
int main ()
{
	//input	edge(from,to)  cost 
	//output weighted graph

	/*	
  
	input:
	3 (nodes)   7 edges (from,to)=cost			//cost==weight 
    from to cost
	 0   1   10 	
  	 0   2   5
  	 1	 0	 2	
  	 1   1   7
  	 1   2   9
  	 2   0   3
  	 2   1   2
  	 
  	 
  	output:
	adjMatrix
	0 10 5	
	2 7  9
	3 2  0
	*/
		
	int n,edges,from,to,cost,adjMatrix[100][100]={0}; 
	
 
	cin>>n>>edges;
	for(int i=0;i<edges;i++)
	{
		cin>>from>>to>>cost;
		adjMatrix[from][to]=cost;
		// adjMatrix[to][from]	=cost;  //for undirect graph add this line 
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<adjMatrix[i][j]<<" ";
		}cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	return 0 ;
}
