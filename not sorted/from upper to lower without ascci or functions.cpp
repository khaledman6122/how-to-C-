#include <iostream>
using namespace std ;
int main ( )
{
   char arr[]="IEEE NU CAMP";
   arr[4]=0;
   cout<<arr<<endl;
   for(int i=0;arr[i];i++)
 {
 	if(arr[i]>='A'&&arr[i]<='Z')
 	arr[i]=arr[i]-'A'+'a';   // any two letters can be added 'A' , 'a'//
 	
 }
   cout<<arr<<endl;
     

    
return 0 ;	
}

