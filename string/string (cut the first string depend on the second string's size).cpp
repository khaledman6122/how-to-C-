#include <iostream>
#include <string>
using namespace std ;
int main (){
	
	
	string name1,name2;
	int size,size2;
	cin>>name1>>name2;
    size2=name2.size(); 	
	size=name1.size()-size2;
	
	name1=name1.substr(size,size2);
	
	cout<<name1<<endl;

}





















/*
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
   int name1size,name2size,subname;
   string name1,name1cut,name2;
   cin>>name1>>name2;
   
   name1size=name1.size();
   name2size=name2.size();
   subname=name1size-name2size;
   cout<<name1size<<endl;
   cout<<name2size<<endl;
   name1cut= name1.substr(subname,name2size);
	cout<<name1cut<<endl;
}


*/
