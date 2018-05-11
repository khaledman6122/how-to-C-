#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std ;
int main ()
{
	int x=0 ;
	string word ;
	cin>>word;
	for(int i=0 ;i<word.length();i++)
	{
		if(isdigit(word[i]))
		 {
		 cout<<"YES"<<endl;
		    }
}
	cout<<"x = "<<x<<endl;
	cout<<"x + 1  = "<<++x<<endl;
	
	return 0 ;
}
