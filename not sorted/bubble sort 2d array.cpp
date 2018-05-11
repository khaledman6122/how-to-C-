


#include <iostream>
using namespace std ;
int main ()
{
	int n,arr[1000][2]={0};
	cin>>n;
	


  	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>arr[i][j];
		}
	}






	  for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-1;j++)
{
   if(arr[i][0]<arr[j][0])
   {
   swap(arr[i][0],arr[j][0]);
   swap(arr[i][1],arr[j][1]);
   }
   
  }      
	
    }
    
    
    
      	for(int i=0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	cout<<endl;
	}

    
    return 0 ;
}
