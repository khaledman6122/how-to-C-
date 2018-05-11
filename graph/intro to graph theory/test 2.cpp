#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int v,edges,from,to;
	bool arr[1000][1000]={false};
	cin>>v>>edges;
	for(int i=0;i<edges;i++)
	{
		cin>>from>>to;
		arr[from][to]=true;		//direct graph
		arr[to][from]=true;		//undirect graph add this line too
	}
	
	 
	
	
	for(int i=0;i<v;i++)
	{
		for(int j=0;j<v;j++)
		{ cout<<arr[i][j]<<" ";		}
		cout<<endl;
	}
	
	
	
	/*
	input :
	v=5 (0,1,2,3,4) 
	edges=8 (0,1) (0,2) (1,2) (1,3) (1,4) (2,3) (2,4) (3,1)
	
	output :directed
	0 1 1 0 0
 	0 0 1 1 1
 	0 0 0 1 1
 	0 0 0 0 0
 	0 0 0 0 0
	
	
	
	output :udirected
 	0 1 1 0 0
 	1 0 1 1 1
 	1 1 0 1 1
 	0 1 1 0 0
 	0 1 1 0 0
	*/
	
	
	
	
	
	
	
	
	

	
	return 0 ;
}
