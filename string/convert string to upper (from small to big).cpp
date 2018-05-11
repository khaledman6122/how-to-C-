#include <iostream>
#include <string>
using namespace std; 
int main()
{
	
	string word;
	cout<<"enter a string with lower to convert it to upper  "<<endl;
	getline(cin,word);
	
	cout<<endl;
	
	for(int i=0;i<word.size();i++)
	{
		word[i]=toupper(word[i]);
	}
	
	cout<<word<<endl;
	
	
	
}
