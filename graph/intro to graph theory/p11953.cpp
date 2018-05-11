//		https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3104		//
#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int n,t,ship=0,shots=0;
	char chr;
	cin>>t;
	for(int x=0;x<t;x++)
	{
	cin>>n;
	vector <vector<int> > vec(n);
	vector <vector<int> > vec2(n);
	
		char arr[100][100];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{cin>>arr[i][j]; }
	    }
	    	
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{	
				if(arr[i][j]=='x')
				{
					vec[i].push_back(j);
				}
			}
			if(vec[i].empty())
			vec[i].push_back(-1);
		}
	
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(arr[i][j]=='@')
				shots ++;
			}
			if(shots==n-1||shots==n)
			vec2[i].push_back(n);
			else vec2[i].push_back(-1);
			
			shots=0;
		}
	
  	
		for(int i=0;i<n;i++)
		{
		if(vec[i][0]!=-1) ship++;	
		if(vec2[i][0]==n) shots++;
		}
			
	
		
	
	cout<<"Case "<<x+1<<": "<<ship-shots<<endl;
	
	vec.clear(),vec2.clear(),ship=0;
	
	} 
	
	
	
	
	
	
	
	
	return 0;
}
