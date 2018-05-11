#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std ;
int main ()
{
    vector <string> vec ;
	//set <string> S;
	
	string name;
	int x;
	cout<<"enter number of names in vector"<<endl;
	cin>>x;
	for(int i=0;i<x;i++)  //vector is indexed so we have to start from 0 like arrays
	{
	    cin>>name ;
		vec.push_back(name);
	}
	
	//put all elments from vector to SET
	set<string> S(vec.begin(),vec.end());
	set<string> ::iterator iter2;
	
	//display
	for(iter2=S.begin();iter2!=S.end();iter2++)
	cout<<*iter2<<" ";
	
	cout<<endl;
	
	//display
	cout<<"enter name to erase"<<endl;
	cin>>name;
	S.erase(name);
	cout<<endl;
	for(iter2=S.begin();iter2!=S.end();iter2++)
	cout<<*iter2<<" ";
	
	
	return 0 ;
}

