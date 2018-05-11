#include <iostream>
#include <string>
using namespace std ;
int main (){
     
     
    string name1,name2;
    int size1,size2,size,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
     
    cin>>name1>>name2;
    size1=name1.size();
    size2=name2.size();     
    size=size1-size2;
     
     if(size1<size2)
     {
        cout<<"nao encaixa"<<endl;
     }
     if(name1==name2)
    {
        cout<<"encaixa"<<endl;
     }
      if(name1!=name2)
      {
        cout<<"nao encaixa"<<endl;
      }
      if(size1>size2)
    {
     
    name1=name1.substr(size,size2);
      if(name1==name2)
        cout<<"encaixa"<<endl;
    else if(name1!=name2)
      
        cout<<"nao encaixa"<<endl;
     }
 
size1=0,size2=0,size=0;
}
return 0 ;
}
































/*#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	
	 string name1,name2;
	 bool result;
	 cin>>name1>>name2;
	 if(name1==name2)
	 {
	 	cout<<"EQUAL"<<endl;
	 }
	 	else if(name1!=name2)
	 	{
	 		cout<<"Not EQUAL"<<endl;
	
		 }
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 	
	 /*
	 for(int i=0,j=0;i<name1.length(),j<name2.length();i++,j++)
	 {
	 	
	 	if (name1[i]==name2[j])
	 	{
	 		cout<<"strings equal to each other"<<endl;
		 }
	 	else
	 	cout<<"strings NOT equal to each other"<<endl;
	 	
	
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
}

*/
