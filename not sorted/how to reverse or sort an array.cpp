#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
	
	const int size= 5;
	int array[size];
	for(int i=0;i<size ;i++)
	{
		cin>>array[i];
	}
	
	
	//sort(array,array+5);    // Ascending order  from small to big //
	reverse(array,array+5);            //	reverse(array,array+size);// //5==size//
	for(int i=0;i<size;i++)
	{
		 	cout<<"N["<<i<<"] = "<<array[i]<<endl;
	}
	
	return 0 ;
}


/*
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    const int SIZE = 5; // must be a constant variable
    int myArray[SIZE];

    cout << "Enter 5 Numbers: "<< endl;
    for(int i = 0; i < SIZE; i++)
    {
        cin >> myArray[i];
    }
    reverse(myArray, myArray+SIZE);
    cout << "Your 5 numbers are: ";
    for(int i = 0; i < SIZE; i++)
    {
        cout << myArray[i] << " ";
    }

   //system("pause"); // pause system
   return 0;
}

*/
