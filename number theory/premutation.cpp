#include <iostream>
#include <algorithm>
using namespace std ;
int main ()
{
	int arr[]={1,2,3},x,y,z;
	do
	{
		x=arr[0],y=arr[1],z=arr[2];
		cout<<x<<" "<<y<<" "<<z<<endl;
	}while(next_permutation(arr,arr+3));
	
	
	
	
	
	
	
	return 0 ;
}
