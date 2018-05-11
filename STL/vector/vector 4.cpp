#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
	
	vector <int> vec ;
	vector <int> ::iterator iter;
	vector <int> ::reverse_iterator r_iter;
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>x;
		vec.push_back(x);
	}
	
	vec.erase(4);
	//for(vector <int> ::iterator iter=vec.begin();iter!=vec.end();iter++)
	for(iter=vec.begin();iter!=vec.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
	
	
	//reverse iterator //
	for(r_iter=vec.rbegin();r_iter!=vec.rend();r_iter++)
	{
		cout<<*r_iter<<" ";
	}
	
	
	
	
	//////////////////////////////////////////////////////////////////////////////
	/*
	riter=vec.rbegin();
	while(riter!=vec.rend())
	{
		cout<<*riter<<endl;
		riter ++ ;
	}
	*/
	
	
	
	/*
	iter=vec.begin();
	while(iter!=vec.end())
	{
		cout<<*iter<<" ";
		iter++;
	}	cout<<endl;
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
