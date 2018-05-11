#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{ 
 

   string word1,word2;
 
	getline(cin,word1);
	word2=word1;
	reverse(word2.begin(),word2.end());
	 
	if(word1==word2)
	cout<<word1<<" is palindrom "<<endl;
	else 
	cout<<word1<<" is not palindrom "<<endl;
	
	return 0 ;
}

