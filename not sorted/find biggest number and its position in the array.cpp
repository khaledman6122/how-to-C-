#include <iostream>
using namespace std;
int main()
{
	const int size=100;
	int position_num=0;
	int max_num=0;
	int array[size];
	for(int i=0;i<size;i++)
	{
		
		cin>>array[i];
		if(array[i]>max_num)
		{
			max_num=array[i];
			position_num=i;
					}
		
	}
	
	cout<<max_num<<endl;
	cout<<position_num+1<<endl;
	
	return 0 ;
	
}






















































/*
#include <iostream>
using namespace std;
int main()
{
    const int size=8;
	int array[size] = {8, 25, 36, 44, 52, 60, 75, 89};
     int max=0;
     for(int i=0;i<size;i++)
     {
	 
     if(array[i]>max)
     {
     	max=array[i];
     	i= max;
     	
	 }
	 }
cout << "The biggest member value of the array is "<<max<<endl;
	

	return 0;
}
*/
/*
#include <iostream> //include header file

using namespace std;
int main () //start of main fcn
{

    int values[ 20 ]; //delcares array and how many elements
    int small,big; //declares integer
     big=small=values[0];
	 for ( int i = 0; i < 20; i++ ) //counts to 20 and prompts user for value and stores it
    {
        cout << "Enter value " << i << ": ";
        cin >> values[i];
    }
    //big=small=values[0]; //assigns element to be highest or lowest value
    for (int i = 0; i < 20; i++) //works out bigggest number
    {
        if(values[i]>big) //compare biggest value with current element
        {
            big=values[i];
        }
         if(values[i]<small) //compares smallest value with current element
        {
            small=values[i];
        }
    }
     cout << "The biggest number is " << big << endl; //prints outs biggest no
    cout << "The smallest number is " << small << endl; //prints out smalles no
}


*/
/*
#include<iostream>
using namespace std;

int main()
{
	int Arr[100],n,i,small,large;

	cout<<"Enter number of elements you want to insert ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<":";
		cin>>Arr[i];
	}

	small=Arr[0];
	large=Arr[0];

	for(i=1;i<n;i++)
	{
		if(Arr[i]<small)
			small=Arr[i];
		if(Arr[i]>large)
			large=Arr[i];
	}

	cout<<"\nLargest element is :"<<large;
	cout<<"\nSmallest element is :"<<small;
    
	return 0;
}
*/
