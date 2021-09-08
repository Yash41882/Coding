#include <iostream>

using namespace std;

struct Node
{
    int info;
    Node *next;
};

class LinkedStr
{
    private:
        Node *ptr;

    public:

        // Constructor. initialize ptr to NULL
        LinkedStr();

        // Destructor. Remove all Node from Dynamic Memory
        ~LinkedStr();

        // Create linked structure of length len pointed to by ptr
        // The value of info part are input from keyboard
        void makeStr(int info);

        // Display all the elements of the linked structure
        // pointed to by ptr on the screen
        void displayStr();

        // Remove the first element of linked structure pointed to by ptr
        // if the structure is empty do nothing
        void removeFirst();

        // Remove the Last element of linked structure pointed to by ptr
        // if the structure is empty do nothing
        void removeLast();

        // Remove the first element of linked structure with an info field
        // equal to k. if no such element or the structure is empty do nothing
        void remove(int k);
};

LinkedStr :: LinkedStr()
        {
            ptr = NULL;
        }

LinkedStr::~LinkedStr()
{
    Node* temp = ptr;
    while( temp != 0 ) 
    {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
    ptr = 0;
}


void LinkedStr :: makeStr(int info)
{
		Node *temp = new Node();
		temp->info = info;
		if (ptr == NULL)
        {
			// if linked list is empty
			// make temp the new head
		    ptr = temp;
		}

		else
        {
		// if linked list is not empty
		// go to the last node of the linked list
		Node *p = ptr;
		// the loop sets ptr to last node of the linked list
		while (p->next != NULL)
        {
			p = p->next;
		}
		// ptr now points to the last node of the linked list
		// store temp in the next of ptr  
		p->next = temp;
	}
}


void LinkedStr :: removeFirst()
{
	if (ptr == NULL)
    {
		cout<<"List is Empty"<<endl;
	}
	else
    {
		cout<<"Element Deleted: "<<ptr->info<<endl;
		// if linked list is not empty
		// store address of first node of the linked list in temp
		Node *temp = ptr;
		// set second node as the new head of the linked list
		ptr = ptr->next;
		// free the old ptr
		delete(temp);
	}
}


void LinkedStr :: removeLast()
{
	if (ptr == NULL)
    {
		cout<<"List is Empty"<<endl;
	}
	else if (ptr->next == NULL)
    {
	    // if there's only 1 node in the linked list
		// free ptr and set it to NULL
		cout<<"Element Deleted: "<<ptr->info<<endl;
		delete(ptr);
		ptr = NULL;
	}
	else
    {
		// if there's more than 1 node in the linked
		// traverse to 2nd last node of the linked list
		Node *temp = ptr;
		// the loop sets temp to 2nd last node of the linked list
		while (temp->next->next != NULL) 
        {
			temp = temp->next;
		}
		// temp now points to the 2nd last node of the linked list
		cout<<"Element Deleted: "<<temp->next->info<<endl;
		// delete last node
		delete(temp->next);
		// set the next of 2nd last node to NULL
		temp->next = NULL;
	}					
		
}


void LinkedStr :: remove(int k)
{
	if (ptr == NULL)
    {
		// if list is empty do nothing
		cout<<"List is Empty"<<endl;
	}
	
    else
    {
		Node *temp, *p;
		if (k == 0) 
        {
		    // if k==0, perform delete at beginning
		    cout<<"Element Deleted: "<<ptr->info<<endl;
		    p = ptr;
		    ptr = ptr->next;
		    delete(p);
		}
		else
        {
			// if k > 0
			// set ptr to pth node and temp to (k-1)th node
			temp = p = ptr;
			while(k>0)
            {
				--k;
				temp = p;
				p = p->next;
			}
			cout<<"Element Deleted: "<<p->info<<endl;
			// set next of (k-1)th node to next of kth node
			temp->next = p->next;
			// free kth node
			free(p);
		}
	}
		
}


void LinkedStr :: displayStr()
{
	if (ptr == NULL)
    {
		cout<<"List is empty"<<endl;
	}
	else
    {
		Node *temp = ptr;
		cout<<"Linked List: ";
		while (temp != NULL)
        {
			cout<<temp->info<<"->";
			temp = temp->next;
		}
			cout<<"NULL"<<endl;
	}
}


int main() 
{
    system("CLS");
	int choice,info,p;
	LinkedStr ls;
    printf("\n1 To Insert an Element");
	printf("\n2 To Remove first Element of the Linked Structure");
    printf("\n3 To Remove last Element of the Linked Structure");
    printf("\n4 To Remove Element of the Linked Structure with given info Field");
	printf("\n5 To Display all the elements of Linked Structure");
    printf("\n6 To Clear all the elements of Linked Structure");
	printf("\n0 To Exit");
	
    do 
    {    
		cout<<"\nEnter Your Choice: ";
		cin>>choice;
		switch (choice)
		{
			case 1:
				cout<<"Enter Element: ";
				cin>>info;
				ls.makeStr(info);
				break;
				
			case 2:
				ls.removeFirst();
				break;
				
			case 3:
				ls.removeLast();
				break;
				
			case 4:
				cout<<"Enter Position ( zero-indexed ): ";
				cin>>p;
				ls.remove(p);
				break;
				
			case 5:
				ls.displayStr();
				break;

            case 6:
                ls.~LinkedStr();
                break;
				
		}
	} while (choice != 0);
	
    return 0;
}
