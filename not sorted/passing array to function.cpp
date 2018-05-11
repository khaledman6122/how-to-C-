#include <iostream>
using namespace std ;
float func_array (int array[],int size);
int main()
{
	 int num=0;
	int arr[num];
	cout<<"enter the size of 1D array"<<endl;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	func_array(arr,num);
    	
}
float func_array (int array[],int size)
{
	
	float avg=0,sum=0;
	
		for(int i=0;i<size;i++)
	{
	
		sum+=array[i];
	}
	
	avg=sum/size;
		cout<<"the sum is"<<sum<<endl;  
	cout<<"the average is"<<avg<<endl;
	
	return avg,sum;
		
}









/*
#include <iostream>
using namespace std ;

float func_array (int array[],int size)
{
	
	float avg=0,sum=0;
	
		for(int i=0;i<size;i++)
	{
	
		sum+=array[i];
	}
	
	avg=sum/size;
		cout<<"the sum is"<<sum<<endl;  
	cout<<"the average is"<<avg<<endl;
	
	return avg,sum;
		
}

int main()
{
	 int num=0;
	int arr[num];
	cout<<"enter the size of 1D array"<<endl;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	func_array(arr,num);
    	
}


*/
