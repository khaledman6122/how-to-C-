// for one char only need to be deleted in string  //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	string word;
	getline(cin,word);


//	word.erase(remove(word.begin(),word.end(),'a'));           erase a and the length (size) of the string will change 
//	word.erase(find(word.begin(),word.end(),'a'));             erase a and the length (size) of the string will change 
//  remove(word.begin(),word.end(),'a');                      remove 'a' and repeate the last characher and the size of the string still the same 


//	word.erase(word.begin(),word.end());                       erase the whole string+


  

	cout<<word<<endl;
	
	
	
	 
}



/*
//best method for repeated char need to be deleted  //
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
string word ;
cin>>word ;
	for(int i=0;i<word.length() ;i++)
	for(int j=0;j<word.length()*100 ;j++)
{
	if(word[i]=='a')
	word.erase(find(word.begin(),word.end(),'a'));

}
cout<<word<<endl;
*/

