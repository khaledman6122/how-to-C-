#include <iostream>
#include <string>
using namespace std; 
int main()
{
	
	string word;
	cout<<"enter a string with upper to convert it to lower  "<<endl;
	getline(cin,word);
	
	cout<<endl;
	
	for(int i=0;i<word.size();i++)
	{
		word[i]=tolower(word[i]);
	}
	
	cout<<word<<endl;
	
	
	
}
