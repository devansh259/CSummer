#include <iostream>
using namespace std;
	
class node {
	public:
	int val;
	node*next;
	node(int valnew) {
		val = valnew;
		next = NULL; } };

class LL {
	public:
	node*head;
	LL () {
			head = NULL ; }

void insert (int val1) {
		node*n1=new node(val1);
		n1-> next = head;
		head = n1;
		}

void display() {
		node*current = head;
		while (current != NULL) {
		cout << current -> val << "->" ;		
		current =current -> next; } 
		}

void delet() {
			node*temp=head;
			head= head-> next;
			delete temp;
			}

int count() {
			int count = 0;
			node*cur=head;
			while ( cur != NULL )
			{ count ++ ;
			cur = cur -> next;
			}	
			return count; }


void insertat( int val2, int pos) {
			if ( (pos >= 1) && (pos <= (count() + 1)) ) { 
			if (pos ==1) { insert(val2); }
			else { node*curr1=head;
				   node*temp1 = new node(val2); 
				 int num2=0;
				while ( num2 != (pos-1) ) {
				curr1 = curr1 -> next;
				num2++ ;}
				temp1-> next = curr1 -> next;
				curr1 -> next = temp1; } }
		else { cout << "positon not exist" << endl; } } 


void deletat( int pos2) {
				if ( (pos2 >= 1)  && (pos2 <= count() ) ) {
				if (pos2==1) { delet(); }	
				else { 
						 node*temp2=head;
						node*cur2;
						 int num3=0;
						while (num3 != (pos2 -1) ) {
						temp2 = temp2 -> next;
						num3 ++ ; }
						cur2 = temp2-> next;
						temp2 -> next = cur2 -> next;
						temp2 = temp2 -> next;
						delete temp2; } }
			else { cout << "not " << endl;} }
	
	void ReverseLL() {
			int i,j;
			i=0;
			j= (count() -1);
			node*p=head;
			node*q=head;
			while(i<j) { int k=0;
			
			while (k<j) { 
						q = q->next;	
						k++; }
			node*n1= new node( p -> val) ;
			p -> val = q -> val;
			q -> val = n1 -> val;
			delete n1;
 			i++;
			j--; 
			p = p -> next;
			q = head; 
			}	}		
};						 

int main () {
		LL l1;
		for (int i=0; i<10; i++) {
		l1.insert (i); }
		l1.insertat(2,6);
		l1.deletat(6);
		l1.display();
		return 0; } 
	
					
			
		
