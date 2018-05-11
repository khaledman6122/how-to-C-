#include <iostream>
using namespace std ;
struct node
{
	int id;	
	string name;
	node *next;
};

int main ()
{
	int n;
	cin>>n;
	node *head=NULL;
	for(int i=0;i<n;i++)
	{
		node *temp=new node;
		cin>>temp->id;		cin>>temp->name;
		temp->next=head;
		head=temp;
	}
	
	
	
	node *display=head;
	for(display;display!=NULL;display=display->next)
	{
		cout<<display->id<<" "<<display->name<<endl;
	}
	cout<<"head "<<head->name<<endl;
	
	
	cout<<"enter number to delete (id)"<<endl;	cin>>n;
	
	
	
	node *explorer1=head;
	node *explorer2=NULL;
	
	
	// first way to delete node
	for(explorer1;explorer1!=NULL;explorer1=explorer1->next)
	{
		if(explorer1->id==n&&explorer1==head)
		{
			head=explorer1->next;
			delete explorer1;
		}
		else if(explorer1->id==n)
		{
			explorer2->next=explorer1->next;
		}
		
		
			explorer2=explorer1;
		
	}
	
	
	
	
	
	
	/*
	// second way to delete node
	while(explorer1!=NULL)
	{
		if(explorer1->id==n&&explorer1==head)
		{
			head=explorer1->next;
			delete explorer1 ;
			break ;
		}
		else if(explorer1->id==n)
		{
		explorer2->next=explorer1->next;
		delete explorer1;
		break;
		}	
		else
		{
		explorer2=explorer1;
		}
		explorer1=explorer1->next;
	}
	
	*/
	
	

	
	
	for(display=head;display!=NULL;display=display->next)
	{
		cout<<endl<<display->id<<" "<<display->name;
	}
	
	return 0 ;
}
