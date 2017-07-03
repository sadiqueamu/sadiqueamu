#include<iostream>
using namespace std;

struct node {
int data;
 node* next;
};

class mylist {
     node *start;
public:
     mylist(struct node *ptr) {
         start = ptr;
     }
     
    void display() {
       node *ptr = start;
       if(!ptr) cout<<"list is empty\n";
       else {
          while(ptr) {
             cout<<ptr->data<<" ";
             ptr = ptr->next;
          }
          cout<<endl;
      }
    }
    
   void insertBack(struct node *ptr) {
      if(!start) {
        start = ptr;
       }
       else { 
         struct node *temp = start;
         while(temp->next) {
           temp = temp->next;
         }
         temp->next = ptr;
      }
    }
    node* createNode(int data) {
       struct node* temp = new node;
       temp->next= NULL;
       temp->data = data;
       return temp;
    }
    
    void insertFront(struct node* ptr) {
       if(!start) {
          start = ptr;
       }
       else {
          ptr->next = start;
          start = ptr;
       }
    }
   void reverse() {
      if(!start)
         cout<<"Nothing to reverse!!The list is empty\n";
      else if(!start->next) {
         cout<<"Nothing to reverse, single node\n";
      }
      else {
       struct node* ptr = start;
       struct node* previous;
       struct node* current = NULL;
       while(ptr) {
         previous = current;
         current = ptr;
         ptr = ptr->next;
         current ->next = previous;
       }
       start = current;
      }
  }
  void insertNthPos(struct node *nth,int n) {
     int i = 1;
     struct node* ptr = start;
     struct node* temp;
     while(ptr) {
       if(i == n) {
         temp = ptr->next;
         ptr->next = nth;
         nth->next = temp;
         break;
       }
       i++;
       ptr = ptr->next;
    }
  }
  void deleteNthNode(int pos) {
	  int i = 1;
	  struct node* ptr = start;
	  struct node* temp;
	  if(i == pos) {
		  temp = start->next;
		  start = temp;
		  delete ptr;
	  }
	  else {
		i = 2;
	    while(ptr) {
		  if(i == pos) {
			temp = ptr->next;
			ptr->next = temp->next;
			delete temp;
			break;
		  }
        i++;
        ptr = ptr->next;
	  }
	 }
  }
  void swapNodes(int pos1,int pos2) {
	  struct node* ptr = start;
	  struct node* previous1 = start;
      struct node* previous2;
	  struct node* first;
	  struct node* second;
      struct node* temp;
	  int i = 1;
      if(pos1 > 1) { 
	    while(i < pos1) {
		  previous1 = ptr;
		  ptr = ptr->next;
		  i++;
	    }
	    first = ptr;
      }   
	  while(i< pos2) {
        previous2 = ptr;
        ptr = ptr->next;
	    i++;
	  }
      second = ptr;
         
      if(pos1 == 1) {
        temp = second->next;
        second->next = start->next;
        previous2->next = start;
        start->next = temp;
        start = second;
            
      }
      else {  
	    temp = first->next;
	    first->next = second->next;
	    second->next = temp;
	    previous1->next = second;
        previous2->next = first;
	  }
  }  
};

int main() {
  mylist m(NULL);
  struct node *temp[5];
  struct node *beta[5];
  //m.display();
  //m.reverse(); 
  for(int i = 0; i <5; i++) {
     temp[i] = m.createNode(2*i);
     m.insertBack(temp[i]);
  }
  for(int j = 0; j< 5 ; j++) {
     beta[j] = m.createNode(2*j+1);
     m.insertFront(beta[j]);
  }
  m.display();
  struct node* ptr = m.createNode(144);
  m.insertNthPos(ptr,10);
  m.display();
  m.reverse();
  m.display();
  m.deleteNthNode(2);
  m.display();
  m.deleteNthNode(1);
  m.display();
  m.deleteNthNode(9);
  m.display();
  m.swapNodes(1,7);
  m.display();
  return 0;
}