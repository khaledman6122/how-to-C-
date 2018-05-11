// toplogical sort (the ends / the leafs first )

#include <iostream>
#include <vector>
#define endl "\n"
using namespace std ;

	vector <vector<int> > adj;
	vector <bool> visited;
	vector <int> topsort;

void dfs(int node)
{
	visited[node]=true;
	if(!adj[node].empty())
	for(int i=0;i<adj[node].size();i++)
	{
		int child=adj[node][i];
		if(!visited[child])  //not visited   = false
		{
			dfs(child);
		}
	}
	topsort.push_back(node);
}


int main ()
{
	
	//never ever intiallize stl's again after intiallize it as glopal
	//but you can resize it 
	int vertix,edges;
	cout<<"number of vertixs"<<endl;
	cin>>vertix;
	//resize adj
	adj=vector<vector<int> > (vertix);
	cout<<"number of edges"<<endl;
	cin>>edges;
	//resize visited
	visited=vector <bool> (vertix);		//already the default value is false 0
										//we dont start visiting yet  visited(0 0 0 0 0 0 0.....0)
	
	
	
	//entering edges between vertixes
	for(int i=0;i<edges;i++)
	{
		int from,to;
		cin>>from>>to;
		adj[from].push_back(to);
	}
	
	//define root/vertix  to start search from it
	vertix=0;
	dfs(vertix);
	 
	for(int i=0;i<topsort.size();i++)
	 cout<<topsort[i]<<" ";
	 
	 
	 
	return 0;
}
/*
input 

5 (vertix)    	4 (edges)	
edges: 
(0,1) (0,3) (1,2) (3,4)


output
2 1 4 3 0
*/



/*
input 

9 (vertix)    	 8(edges)	
edges: 
(0,1) (0,3) (1,2) (1,4)  (3,5)	(3,6)  (2,7)  (6,8)  


output
7 2 4 1 5 8 6 3 0
*/


/*
input 

10 (vertix)    	 9(edges)	
edges: 
(0,1) (0,2) (1,3) (2,4)  (2,5)	(3,6)  (3,7)  (5,8)  (5,9)  

output
6 7 3 1 4 8 9 5 2 0
*/

