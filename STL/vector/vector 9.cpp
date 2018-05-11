#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main()
{
	 std::ios::sync_with_stdio(false);
    
	int n,m,number; 
	cin>>n;
	//you have to determine size of main vector  because we dont push_back directly
	vector <vector<int> > vvec(n) ;
	vector <vector<int> > ::iterator iter;  
	
	
	for(int i=0;i<n;i++)
	{
		cin>>m;
		for(int j=0;j<m;j++)
		{
			cin>>number;
			vvec[i].push_back(number);
		}
	}
	
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<vvec[i].size();j++)
    	{
    		cout<<vvec[i][j]<<" ";
		}
    	cout<<endl;
	}



	return 0 ;
}
