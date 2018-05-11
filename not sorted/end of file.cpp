#include <iostream>
using namespace std ;
int main ()
{
    int x;
    cout<<"enter number and ctrl+z to end"<<endl;
    while( cin.get()!=EOF)         // while (!cin.eof()) //
    {
   cin>>x;
   cout<<"number you entered is : "<<x<<endl;
   
    }
 
 
 
    return 0;
}
