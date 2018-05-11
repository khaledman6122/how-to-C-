#include <iostream>
using namespace std ;
int main ( )
{
    
	char word;
    cin>>word;
    int x=static_cast <char>(word);
    x+=32;
    cout<<static_cast <char>(x);
    
    
    
return 0 ;	
}

