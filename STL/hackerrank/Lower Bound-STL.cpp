// https://www.hackerrank.com/challenges/cpp-lower-bound  //
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
/*
int binarysearch(int l,int u,vector<int> vb,int key)
{
	int mid=l+(u-l)/2;
	if(l>u) return -1;
	//if(l==u)return true ;
	else
	{
		if(vb[mid]>key)
		{
		u=mid-1;
		binarysearch(l,u,vb,key);
		}
		else if(vb[mid]<key)
		{
		l=mid+1;
		binarysearch(l,u,vb,key);
		}
		else if(vb[mid]==key)
		{
		return 1 ;
		}
	}
}

*/
int main ()
{
	typedef vector <int>  v;
	typedef vector <int> ::iterator it;
	
	
	v vec;
	it low,check;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++) { cin>>x; vec.push_back(x); }
	
  	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
	

		low=lower_bound(vec.begin(),vec.end(),x);
		//cout<<low-vec.begin()+1<<" "<<*low<<endl;
		if(*low==x)
		cout<<"Yes "<<low-vec.begin()+1<<endl;
		else cout<<"No "<<low-vec.begin()+1<<endl;
	
	
           }
	
	  	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
















/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
bool binarysearch(int l,int u,vector<int>& vb,int key)
{
	int mid=l+(u-l)/2;
	if(l>u) return false;
	//if(l==u)return true ;
	else
	{
		if(vb[mid]>key)
		{
		u=mid-1;
		binarysearch(l,u,vb,key);
		}
		else if(vb[mid]<key)
		{
		l=mid+1;
		binarysearch(l,u,vb,key);
		}
		else if(vb[mid]==key)
		{
		return true ;
		}
	}
}

int main ()
{
	typedef vector <int>  v;
	typedef vector <int> ::iterator it;
	
	
	v vec;
	it low;
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++) { cin>>x; vec.push_back(x); }
	
  	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(binarysearch(0,vec.size()-1,vec,x)==true)
		{
		low=lower_bound(vec.begin(),vec.end(),x);
		cout<<"Yes "<<low-vec.begin()+1<<endl;
		}
	   else
	   {
	   	low=lower_bound(vec.begin(),vec.end(),x);
		cout<<"No "<<low-vec.begin()+1<<endl;
	
		}	
		
	}
	  	
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
*/

