/*
#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main ()
{
	int N;
     string A,B;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>A>>B;
		if(B.size()>A.size())
		{
			cout<<"nao encaixa"<<endl;
		}
 
		 else if(B=="0")
		 {
		 		cout<<"nao encaixa"<<endl;
		 }

		else if(B.size()==A.size()&&A==B)
		{
			cout<<"encaixa"<<endl;
		}
	 	else if(B.size()<A.size())
		{
	 		if(A.rfind(B))
			{
					cout<<"encaixa"<<endl;
			}
			else 
			{
				cout<<"nao encaixa"<<endl;
			}
 
		}
 
	}
 
 
 
	return 0;
 
 
}
*/
#include <iostream>
#include <string>
using namespace std ;
int main ()
{
	int n;
	string num1,num2;
	cin>>n;
	for(int i = 0; i<n;i++)
	{
		cin>>num1>>num2;
		int size1=num1.size();
        int size2=num2.size();
		if(num1==num2)
		{
			cout<<"encaixa"<<endl;
		}
		else if(num1>num2)
	{
		if((num1==num2) or (size1>size2 and   (num1.substr(size1-size2,size2)==num2) )    ) 
		cout<<"encaixa"<<endl;
	
		else
		 cout<<"nao encaixa"<<endl;
	}
	
	
	
	
	
}
}


























/*
#include <iostream>	/// cin/cout
#include <string>	/// string/size/substr
 
using namespace std;
 
int main() {
    int n;
    string a, b;
     
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        int as = a.size(), bs = b.size();
 
        if ((a == b) or (as > bs and a.substr(as - bs, bs) == b)) {
            cout << "encaixa\n";
        } else {
            cout << "nao encaixa\n";
        }
    }
}
*/







 
