#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	string word1,word2;

    cin>>word2;
    sort(word2.begin(),word2.end());
	cout<<"word after sort : "<<word2<<endl;
	word2.erase(unique(word2.begin(), word2.end()), word2.end()); 
     cout<<"word after erase duplicates : "<<word2<<endl;
	 return 0 ;
	 }
