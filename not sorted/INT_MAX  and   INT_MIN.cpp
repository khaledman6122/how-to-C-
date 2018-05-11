//  INT_MAX  //
#include <iostream>
using namespace std ;
int main ()
{
	int arr[10],m=INT_MAX;
	cout<< m<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		if(arr[i]<m)
		m=arr[i];
	}
	cout<< m<<endl;
	return 0 ;

}



//  INT_MIN  //
/*
#include <iostream>
using namespace std ;
int main ()
{
	int arr[10],m=INT_MIN;
	cout<< m<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		if(arr[i]>m)
		m=arr[i];
	}
	cout<< m<<endl;
 	
	return 0 ;
}

*/
