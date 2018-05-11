#include <iostream>
using namespace std ;
int main ()
{
	//input	weighted graph 
	//output weighted graph

	/*

	adjMatrix
	3 (nodes) 
  	0 10 5	
  	2 7  9
  	3 2  0
	
	
	//to more clearify//
	
	edges (from,to)=cost			//cost==weight
	(0,0)=0  	 (0,1)=10  			(0,2)=5
	(1,0)=2		 (1,1)=7 cycle  	(1,2)=9	
	(2,0)=3  	 (2,1)=2   			(2,2)=0
	
	
	*/
		
	int n,adjMatrix[100][100]={0}; 
	
	/*
	input
	3
	0 10 5	
	2 7  9
	3 2  0
	*/
	cin>>n;			  
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>adjMatrix[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<adjMatrix[i][j]<<" ";
		}cout<<endl;
	}
	
	/*
	//output
	0 10 5	
	2 7  9
	3 2  0
	*/	
	
	
	
	
	
	
	
	return 0 ;
}
