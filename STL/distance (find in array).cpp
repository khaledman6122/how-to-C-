#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	
	int num,arr[10] , size=sizeof(arr)/sizeof(char);
	
	for(int i=0;i<size;i++) 	
	arr[i]=i+1;
	
	cin>>num;
	int index=distance(arr,find(arr,arr+size,num));
	
	if(index!=size)
    cout<<"found at index = "<<index<<endl;
	
	
	else  cout<<"not found"<<endl;
	
	return 0;	
}

//////////////////////////////////////////////////////////////////
/*
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <math.h>
#define endl "\n"
#define ll long long
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	
	char line[]="abcdefgh",chr;
	cin>>chr;
	int size=sizeof(line)/sizeof(char);
	int index=distance(line,find(line,line+size,chr));
	
	if(index!=size) 
	cout<<"found at index = "<<index<<endl;
	
	else cout<<"not found"<<endl;
	
	
	return 0;	
}
*/



///////////////////////////////////////////////////////////////////


/*
#include <iostream>
#include <string>
#include <algorithm>
#define endl "\n"
using namespace std ;
int main ()
{
	std::ios::sync_with_stdio(false);
	int j=0;
	char latin[26];
	
	for(int i=(int)'a';i<=(int)'z';i++)
	latin[j++]=(char)i;
	
	
	cout<<endl<<distance(latin,find(latin,latin+26,'c'));
	
	
	return 0;
}
*/

