#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	string arr[]={"abs","aaa","ddd"};
//	vector <string> vec(arr,arr+sizeof(arr)/sizeof(arr[0])) ;

	int size_arr=sizeof(arr)/sizeof(string);
	vector <string> vec(arr,arr+size_arr) ;


	for(int i=0;i<vec.size();i++)
	cout<<vec[i]<<endl;
	
	
	
	
	
	return 0 ;
}
