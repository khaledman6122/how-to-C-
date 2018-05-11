#include <iostream>
using namespace std ;
int main ()
{
	int a,b,c,d;
	int arr1[10][10],arr2[10][10],arr3[10][10];
	cout<<"enter the dimentions of first array (arr1) \n";
	cin>>a>>b;                       //arr1 row = a &&  arr1 coluom = b   //
	cout<<"enter the dimentions of second array (arr2) \n";
	cin>>c>>d;                     //arr2 row = c &&  arr2 coluom = d   // 
	if(b==c)
	{
		cout<<endl<<"enter elments of first array"<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>arr1[i][j];
			}
		}
		
		
		cout<<endl<<"enter elments of second array"<<endl;
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<d;j++)
			{
				cin>>arr2[i][j];
			}
		}
		
		cout<<endl<<endl;
		
		
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<d;j++)
			{
				arr3[i][j]=0;
				for(int k=0;k<b;k++)
				{
					arr3[i][j]+=arr1[i][k]*arr2[k][j];
				}
			}
		}
		/*
			 for(int i=0;i<a;i++)
		 {
		 	for(int j=0;j<d;j++)
		 	{
		 	arr[i][j]=0;
		 	for(int k=0;k<c;k++)
			  {
			   arr[i][j]+=arr1[i][k]*arr2[k][j];	
			  }	
			 }
		 }
	
		*/
		 
		 
		for(int i=0;i<c;i++)
		{
			for(int j=0;j<d;j++)
			{
				cout<<arr3[i][j]<<" " ;
			}
		cout<<endl;
		}
		
		 
		 
		 
		 
		 
		 
		
	}
	
	
	
	
	
	
	
	
	
	else 
	cout<<"invalid"<<endl;
	
	
	
	
	
	return 0 ;
}
