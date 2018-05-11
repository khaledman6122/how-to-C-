#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main  ()
{
	  string word;
	  char array[]="qwrtyupkjgfdsazxcvbnm";
	  getline(cin,word);
	  for(int i=0;i<word.length();i++)
	  {
	  	for(int j=0;j<25;j++)
	  	{
		 
	  	if(word[i]==array[j])
	  	{
	  		 	word.erase(remove(word.begin(),word.end(),word[i]));
		  }
	  }
	 }
	 
	cout<<word<<endl;
	
	
	
	
	
	
	
	
}

