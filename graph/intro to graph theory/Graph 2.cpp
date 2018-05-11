#include <iostream>
using namespace std ;
int main ()
{
	//input edges
	//output graph representation (boolean)
	
	
	/*
	graph
	0    3      
	
	1    2
	
	edges(from,to)	
	{(0,3),(0,1),(1,2),(2,3),(3,1)}
	
	adjMatrix
	0 1 0 1
	0 0 1 0
	0 0 0 1
	0 1 0 0
	
	*/
		
	int n,edges,from,to,adjMatrix[100][100]={0}; 
	cin>>n;					//4  (0,1,2,3)
	cin>>edges;				//5	{(0,3),(0,1),(1,2),(2,3),(3,1)}
	for(int i=0;i<edges;i++)
	{
		cin>>from>>to;
		adjMatrix[from][to]=1;
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
