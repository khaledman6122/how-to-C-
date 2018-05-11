#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
	//input weighted graph reprsentation
	//output edges list with its cost
	
	
	/*
	adjMatrix
	3 (nodes) 
  	0 10 5	
  	2 7  9
  	3 2  0
	
	edges(from,to)	
	(0,1)=10 ,  (0,2)=5  , (1,0)=2  , (1,1)=7  (1,2)=9  (2,0)=3   (2,1)=2 
		
	*/
		
	int n,from,to,adjMatrix[100][100]={0}; 
	vector <pair<pair<int,int>,int> > edges;
	/*
	input
	3 (nodes) 
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
			if(adjMatrix[i][j]!=0)
			{
				edges.push_back(make_pair(make_pair(i,j) ,adjMatrix[i][j] ));
			}
		}
	}


	for(int i=0;i<edges.size();i++)
	cout<<"("<<edges[i].first.first<<","<<edges[i].first.second<<") = "<<edges[i].second<<endl;
	//cout<<edges[i].first.first<<edges[i].first.second<<edges[i].second;
	/*
	output
	(0,1)=10
	(0,2)=5
	(1,0)=2
	(1,1)=7
	(1,2)=9
	(2,0)=3
	(2,1)=2 
	*/
	
	
	return 0 ;
}
