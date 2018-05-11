#include <iostream>
using namespace std ;
int  main ()
{
	int arr[20];
	for(int i=0;i<20;i++)
	cin>>arr[i];
	
    for(int i=0;i<19;i++)
	{
	for(int j=i+1;j<20;j++)	
	{
	if(arr[i]>arr[j])
	{
		int n=arr[i];
		arr[i]=arr[j];
		arr[j]=n;
	}
	
	}	
	}
	
	for(int i=0;i<20;i++)
	cout<<arr[i]<<" ";
	
	
	
	
	
	
	
	
	
	return 0 ;
}
