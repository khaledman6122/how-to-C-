#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main ()
{
	string arr;
	string ::iterator iter;
	
	cin>>arr;
	iter=find(arr.begin(),arr.end(),'^');
	cout<<*iter<<endl;
	
	     
	
	
	
	return 0 ;
}
