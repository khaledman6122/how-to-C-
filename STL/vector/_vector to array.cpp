#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	 
	 
	vector<double> vec;
	vec.push_back(2.5),vec.push_back(3.25),vec.push_back(4.12),vec.push_back(12.5);
	double *arr = &vec[0];
	int size_arr=vec.size();
	
	 
	for(int i=0;i<size_arr;i++)
	cout<<arr[i]<<endl;
	
	
	
	
	
	return 0 ;
}
