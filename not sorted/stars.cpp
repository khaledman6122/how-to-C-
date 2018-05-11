/*
#include <iostream>
using namespace std ;
int main ()
{
	/*
	for(int i=1;i<=4;i++)
	{
		cout<<" * ";
	}
	*/
	
	/*
	for(int i=1;i<=4;i++)
	{
		cout<<" * "<<endl; 
	}
	*/



/*	
	 for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=2;j++)
		{
			cout<<" * ";
	   		}
		
	cout<<endl;
	}
	
*/	



/*
for(int i=1;i<=4;i++)
{
	for(int j=1;j<=3;j++)
	{
		cout<<" * ";
	}
	cout<<endl;
	}	
*/


/*
for(int i=1;i<=4;i++)
{
	for(int j=1;j<=i;j++)
	{cout<<" * ";
	 	}
cout<<endl;
}

*/


/*
int x;
cin>>x;
for(int i=1;i<=x;i++)
{
	for(int j=1;j<=i;j++)
	{
		cout<<" * " ;
	}
cout<<endl;
}
*/


/*
for(int i=1;i<=3;i++)
{
	for(int j=1;j<=3;j++)
	{cout<<j<<" ";
	}
cout<<endl;
}


*/




/*
for(int i=1;i<=7;i+=3)
{
	cout<<i<<"  "<<i+1<<"  "<<i+2<<"  "<<endl<<endl;
}
	*/




/*
int x ;
cin>>x;
for(int i=1;i<=x;i+=3)
{
	cout<<i<<"  "<<i+1<<"  "<<i+2<<"  "<<endl<<endl;
}	
*/	
	




/*
int x ;
cin>>x;
for(int i=1;i<=x;i+=2)
{
	cout<<i<<"  "<<i+1<<"  "<<"  "<<endl<<endl;
}	
	*/

/*
	for(int j=1;j<=7;j+=2)
	{
		cout<<j<<"  "<<j+1<<endl;
	}
*/	









	

/*
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x = 0 , y = 0;
    cin>>x>>y;
    for(int i = 1 ; i <= y ; i++){
       if(i == y)
            cout<<i;       
        else
            cout<<i<<" ";
       if(i%x == 0)
         cout<<endl;
    }
}

*/
#include <iostream>

using namespace std;

int main(){
    
    int x,y;
    
    cin >> x;
    cin >> y;
    
    int n = 1;
    
    for(int i = 1; i <= y; i++){
            if(n == x) {
                 cout << i << "\n";
                 n = 1;
            }
            else{
            cout << i << " ";
            n++;
            }
    }
    return 0;
}

