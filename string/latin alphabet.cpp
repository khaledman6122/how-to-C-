#include <iostream>
#include <string>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	
	string latin;
	for(int i=(int)'a';i<=(int)'z';i++)
	latin+=(char)i;
	cout<<latin;
		
		/*
	char arr[26];
	int j=0;
	for(char i='a';i<='z';i++)
	arr[j++]=i;
	
	for(int i=0;i<26;i++)
	cout<<arr[i]<<" ";
	*/
	
	
		
		
	return 0;
}
