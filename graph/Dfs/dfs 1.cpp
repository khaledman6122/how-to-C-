#include <iostream>
#include <vector>
#define endl "\n"
using namespace std ;

	vector <vector<int> > adj;
	vector <bool> visited;
	

void dfs(int node)
{
	visited[node]=true;
	cout<<node<<" ";
	
	for(int i=0;i<adj[node].size();i++)
	{
		int child=adj[node][i];
		if(!visited[child])  //not visited   = false
		{
			dfs(child);
		}
	}

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
	 
	return 0;
}
/*
input 

5 (vertix)    	4 (edges)	
edges: 
(0,1) (0,3) (1,2) (3,4)
*/

