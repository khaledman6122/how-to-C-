#include <iostream>
#include <set>
using namespace std ;
int main ()
{
	set <int> S ;
	set<int> ::iterator iter;
	
	int sum=0;
	
	for(int i=1;i<=100;i++)
	S.insert(i);
	
	for(iter=S.begin();iter!=S.end();iter++) 
	{
	sum+=*iter;
    cout<<*iter<<" "<<endl;
	}
	cout<<endl<<"SET SUM : "<<sum<<endl;
	
	
	cout<<"erase even numbers"<<endl;
	for(int i=2;i<=100;i+=2)
	S.erase(i);
	
	for(iter=S.begin();iter!=S.end();iter++) 
	{
	sum+=*iter;
    cout<<*iter<<" "<<endl;
	}
    cout<<endl<<"SET SUM : "<<sum<<endl;
	
	//cout<<S.find(5)<<endl;
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
