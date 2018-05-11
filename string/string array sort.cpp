#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	string word;
// 	getline(cin,word);
    cin>>word;	
	sort(word.begin(),word.end());
    cout<<(word)<<endl;
	
	return 0 ;
}
