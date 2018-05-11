#include<iostream>
#include<functional>  // greater , lesss ,minus
#include <numeric>    /// accumulate
using namespace std ;
int main ()
{
	int arr[5]={0};
	int size=sizeof(arr)/sizeof(int);
	for(int i=0;i<size;i++) cin>>arr[i];
	
	int sum=accumulate(arr,arr+size,0);
	cout<<"sum = "<<sum<<endl;
	
	int multiply =accumulate(arr,arr+size,1,multiplies<int>());
	cout<<"multiply = "<<multiply<<endl;
	
	
	
	
	return 0 ;
}
