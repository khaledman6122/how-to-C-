
	/*
	carpidge array : this example show how the array store carpige(not entered) array the compiler stored it by default 
	
	*/
#include <iostream>
using namespace std ;
int main ()
{
	
	int arr[5];
	for(int i=0 ; i<3 ; i++)
	{
		cin>>arr[i];
	}  
	//   input : 1  2  3   //
	for(int i=0;i<5;i++)
	cout<<arr[i]<<"  ";
	
	//output  1  2  3   carpige number    carpige number    //
	
	
	
	
	
	return 0 ; 
}

