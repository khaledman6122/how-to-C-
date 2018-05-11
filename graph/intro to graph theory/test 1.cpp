#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int v,edges,from,to;
	cin>>v>>edges;
	vector <vector <int> >  vec(v);
	for(int i=0;i<edges;i++)
	{
		cin>>from>>to;
		vec[from].push_back(to);	//direct graph
		vec[to].push_back(from);	//undirect graph add this line too
	}
	
	
	for(int i=0;i<v;i++)
	{
		sort(vec[i].begin(),vec[i].end());
		vec[i].erase(unique(vec[i].begin(),vec[i].end()),vec[i].end());
	}
	
	
	for(int i=0;i<vec.size();i++)
	{
		cout<<i<<" ";
		for(int j=0;j<vec[i].size();j++)
		{ cout<<vec[i][j]<<" ";		}
		cout<<endl;
	}
	
	
	
	/*
	input :
	v=5 (0,1,2,3,4) 
	edges=8 (0,1) (0,2) (1,2) (1,3) (1,4) (2,3) (2,4) (3,1)
	
	output :directed
	0|1 2
	1|2 3 4
	2|3 4
	3|1 
	4|
	
	
	
	output :udirected
	0|1 2
	1|0 2 3 4
	2|0 1 3 4
	3|1 2
	4|1 2
	*/
	
	
	
	
	
	
	
	
	

	
	return 0 ;
}
