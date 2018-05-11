#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
#define all(v)     (v.begin()),(v.end())

void print_vectorofpairs(vector< pair<int,int> >& v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second<<endl;	
	}
	cout<<"\n\n";
	
} 
int main ()
{
	
	vector < pair<int,int> >	vp1;
	
	 
	  int n,num1,num2;
	  cout<<"vector size", cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num1>>num2;
		vp1.push_back(make_pair(num1,num2));
	}
	
	print_vectorofpairs(vp1);
 	
	
	
	
	
	
	
	
	
	
	







	return 0;
	
}
	
