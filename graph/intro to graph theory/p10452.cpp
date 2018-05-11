//		https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1393		//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define endl "\n"
using namespace std ;
void print(vector<string>& vec )
{
	for(int i=0;i<vec.size()-1;i++)
	{
		cout<<vec[i]<<" ";
	}cout<<vec[vec.size()-1]<<endl;
}
int main ()
{
	std::ios::sync_with_stdio(false);
	
	int t,n,m,x,y,index;
	string iehova="IEHOVA";
	char letter; 
	vector <pair<char,pair<int,int> > > vecp;
	vector <pair<int,int> > vecp2;
	vector <string> steps;
	pair<int,int> end ;
	pair<int,int> start ;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>letter;
				index=iehova.find(letter);
				if(index!=string::npos)
				{
					vecp.push_back(make_pair(letter,make_pair(i,j)));
				}
				if (letter=='@')
				start=make_pair(i,j);
				if (letter=='#')
				end=make_pair(i,j);
			}
			
		}
			
		
		for(int s=0;s<iehova.length();s++)
		{
			for(int w=0;w<vecp.size();w++)
			{
				if(iehova[s]==vecp[w].first)
				{
					x=vecp[w].second.first,y=vecp[w].second.second;
					vecp2.push_back(make_pair(x,y));
				}
				
			}
			
		}
		
		
		
		
		vecp2.push_back(end);
		
		x=start.first,y=start.second;
		
		for(int k=0;k<vecp2.size();k++)
		{
			 if(vecp2[k].first<x&&vecp2[k].second==y)
			{
				steps.push_back("forth");
				x=vecp2[k].first,y=vecp2[k].second;
			}
			
			else if(vecp2[k].first==x&&vecp2[k].second>y)
			{
				steps.push_back("right");
				x=vecp2[k].first,y=vecp2[k].second;
			}
			
			else if(vecp2[k].first==x&&vecp2[k].second<y)
			{
				steps.push_back("left");
				x=vecp2[k].first,y=vecp2[k].second;
			}
			
			
		}
		
		
		print(steps);
		
		vecp.clear(),vecp2.clear(),steps.clear();
	
	}
	
	
	
	 
	
	return 0;
}
