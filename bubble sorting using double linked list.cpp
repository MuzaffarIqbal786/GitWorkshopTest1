#include<iostream>
using namespace std;
 class node
 {
 	public:
 		int value;
 		node* Nextnode;
 		node* prevnode;
 	public:
	 void setvalue(int v)
	 {
	 	value=v;
	}	
	int getvalue()
	{
		return value;
	}	 
	void setnextnode(node* n)
	{
		Nextnode=n;
	}
	node* getnextnode()
	{
		return Nextnode;
	}
	void setprevnode(node* p)
	{
		prevnode=p;
	}
	node* getprevnode()
	{
		return prevnode;
	}
 
 };
 
 class list
 {
 	private:
 		node* head;
 		node* current;
 		int size;
 	public:
	 list()
	 {
	 	head=new node();
	 	current=head;
	 	size=0;
		 }	
	
	void addnode(int v)
	{
		node* temp=new node();
		temp->setvalue(v);
		temp->setnextnode(NULL);
		temp->setprevnode(current);
		current->setnextnode(temp);
		//current->setprevnode(NULL);
		//head=temp;
		current=temp;
		size++;
    }	 
   
	void display()
	{
		current=head->getnextnode();
		for(int i=0;i<size;i++)
		{
			cout<<current->getvalue()<<" ";
			current=current->getnextnode();
		}
	}
	void bubleSorting()

	{
	for(int i=0;i<size-1;i++)
		{
			
	    node* p=head->getnextnode();
		node* q=p->getnextnode();
			
	           for(int j=i+1;j<size;j++)
	           {
			   
				if(p->getvalue()>q->getvalue())
				{
					 
					 int temp=p->getvalue();
					 p->setvalue(q->getvalue());
					 q->setvalue(temp);
					 
					 
		 			
					
						
				}
			            p=p->getnextnode();
		            	q=q->getnextnode();	
			}
			
		                
		}
	
	
}


 };
 int main()
 {
 	list l1;
 	int a;
 	int choice;
 	while(1)
 	{
 		
	 
 	cout<<"---------Menue----------\n";
 	cout<<"1.add node\n";
 	cout<<"2.bubble sorting\n";
 	cout<<"3.display\n";
 	cout<<"4.Exit\n";
 	cout<<"Enter your choice\n";
 	cin>>choice;
 	switch(choice)
 	{
	 
 	 case 1:
 	 	cout<<"Enter an integer\n";
 	 	cin>>a;
 	 	l1.addnode(a);
 	 	break;
 	 case 2:
	  l1.bubleSorting();
	  break;
	 case 3:
	  l1.display();
	  break;
	 case 4:
	 exit(0);
	 break;
	   	
}
}
 	return 0;
 }

