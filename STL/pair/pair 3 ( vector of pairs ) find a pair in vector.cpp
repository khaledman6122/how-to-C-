#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
int main()
{
	vector < pair<int,double> > vp1;
	vector < pair<int,double> > ::iterator iter ;
	pair <int,double> p1;
	int x,n1;
	double n2;
	cin>>x;
	
	for(int i=0;i<x;i++)
	{
		cin>>n1>>n2;
		p1=make_pair(n1,n2);
		vp1.push_back(p1);
		//vp1.push_back(make_pair(n1,n2));
	}
	cout<<"enter to find \n";
	cin>>n1>>n2;
	p1=make_pair(n1,n2);
	if(find(vp1.begin(),vp1.end(),p1)!=vp1.end())
	{	
	iter=find(vp1.begin(),vp1.end(),p1);
	cout<<"found in index = "<<iter-vp1.begin()<<endl;
	}
	else if(find(vp1.begin(),vp1.end(),p1)==vp1.end())
	cout<<"not found "<<endl;




 
return 0 ;
}
