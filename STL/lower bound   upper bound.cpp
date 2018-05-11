#include <iostream>
#include <vector>
#include <algorithm>


using namespace std ;
int main ()
{
	typedef vector <int>  v;
	typedef vector <int> ::iterator it;
	
	
	v vec;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++) { cin>>x; vec.push_back(x); }
	
	it low=lower_bound(vec.begin(),vec.end(),2);
	cout<<low-vec.begin()<<endl;
	
	it up=upper_bound(vec.begin(),vec.end(),2);
	cout<<up-vec.begin()<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
