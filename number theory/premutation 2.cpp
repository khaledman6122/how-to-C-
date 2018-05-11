#include <iostream>
#include <algorithm>
#include <vector>
using namespace std ;
int main ()
{
	int x,y,z;
	vector <int> vec ;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	do
	{
		x=vec[0],y=vec[1],z=vec[2];
		cout<<x<<" "<<y<<" "<<z<<endl;
	}while(next_permutation(vec.begin(),vec.end()));
	
	
	
	
	
	
	
	return 0 ;
}
