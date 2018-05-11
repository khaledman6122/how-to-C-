#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	string word ;
	cin>>word;
	for(int i=0 ;i<word.length();i++)
	{
		if(isdigit(word[i]))
		 {
		 cout<<"YES"<<endl;
		    }
}
 	
	return 0 ;
}
