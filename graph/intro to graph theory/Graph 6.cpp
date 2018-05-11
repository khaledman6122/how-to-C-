#include <iostream>
using namespace std ;
int main ()
{
	//input	edge(from,to)  cost 
	//output weighted graph with shortest edge (shortest path)

	/*	
	3 (nodes)   10 edges (from,to)=cost			//cost==weight 
    from to cost
	 0   1   6   <---   choosed(shortest) 	
	 0   1   10  <--- 	neglected(longest)
	 0   2   5   <<---  neglected(longest)			
	 0   2   1   <<---  choosed(shortest)
  	 1	 0	 2	
  	 1   1   7
  	 1   2   9
  	 2   0   3  <<<--- neglected(longest)			
  	 2   0   1  <<<--- choosed(shortest)
  	 2   1   2
	
	adjMatrix          adjMatrix(final)
	0  6  5   (5-->1)     0  6  1	  
	2  7  9		          2  7  9
	3  2  0   (3-->1)     1  2  0    
	
	
	*/
		
	int n,edges,from,to,cost,adjMatrix[100][100]; 
	//to choose shortest edge you must intialize the array with 'oo' infinity =INT_MAX
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		adjMatrix[i][j]=INT_MAX;
	}
		
	
	
	/*
	input  
	 3  10
	 0   1   6 
	 0   1   10
	 0   2   5
	 0   2   1
  	 1	 0	 2	
  	 1   1   7
  	 1   2   9
  	 2   0   3
  	 2   0   1
  	 2   1   2
	*/
	cin>>n>>edges;
	
	for(int i=0;i<edges;i++)
	{
		cin>>from>>to>>cost;
		adjMatrix[from][to]=min(adjMatrix[from][to],cost);
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(adjMatrix[i][j]==INT_MAX)
			adjMatrix[i][j]=0;
			cout<<adjMatrix[i][j]<<" ";
		}cout<<endl;
	}
	/*
	output
	adjMatrix(final)
	0  6  1	
	2  7  9
	1  2  0
	*/
	
	
	
	

	return 0 ;
}
