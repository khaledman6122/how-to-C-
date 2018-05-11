#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
	//input boolean graph representation
	//output edges (from,to)
	
	
	/*
	graph
	0    3      
	
	1    2
	
	adjMatrix
	0 1 0 1
	0 0 1 0
	0 0 0 1
	0 1 0 0
	
	edges(from,to)	
	{(0,3),(0,1),(1,2),(2,3),(3,1)}
	
	
	*/
		
	int n,from,to,adjMatrix[100][100]={0}; 
	vector <pair<int,int> > edges;
	/*
	input
	4
	0 1 0 1
	0 0 1 0
	0 0 0 1
	1 0 0 0
	*/
	cin>>n;			
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>adjMatrix[i][j];
			if(adjMatrix[i][j]==1)
			{
				edges.push_back(make_pair(i,j));
			}
		}
	}

	//edges	(0,1) (0,3) (1,2) (2,3) (3,0)
	for(int i=0;i<edges.size();i++)
	cout<<"("<<edges[i].first<<","<<edges[i].second<<")"<<" ";
	
	
	
	
	
	return 0 ;
}


/*



#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int adjMatrix[100][100]={0};
    int n,from,to,cost;
 	vector <pair <pair <int,int>, int> > edges;
 	cin>>n;
 	for(int i=0;i<n;i++)
 	{
	for(int j=0;j<n;j++)
	{
	cin>>adjMatrix[i][j];		//directed graph
	}
	 }
 	
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<n;j++)
 		{ 
 		if(adjMatrix[i][j]!=0)
 		{	edges.push_back(make_pair(make_pair(i,j),adjMatrix[i][j]));		}	
		}
	 }
 	
 	for(int i=0;i<edges.size();i++)
 	{
 		cout<<edges[i].first.first<<" "<<edges[i].first.second<<"  cost="<<edges[i].second<<endl;
	 }
 	
 	
 	 
	input:
	4
	0 4 0 2
	0 0 5 0
	0 0 0 3
	7 0 0 0
	
	output:
	0 1  cost=4
	0 3  cost=2
	1 2  cost=5
	2 3  cost=3
	3 0  cost=7
	
	 
 	
 	
	return 0;
}


*/
