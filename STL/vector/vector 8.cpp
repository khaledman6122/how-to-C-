#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define endl "\n"
using namespace std ;
int main ()
{
	
	vector <int> vec;
	vector <int> ::iterator iter;
	int n,num;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		vec.push_back(num);
	}
	cin>>num;
	iter=find(vec.begin(),vec.end(),num);
	if(iter!=vec.end())
	{
		int index=iter-vec.begin();
		cout<<"index = "<<index<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
