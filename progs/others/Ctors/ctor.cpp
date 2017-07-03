#include<iostream>
using namespace std;

class A {
  int k;
  int *ptr;
public:
     A() { cout<<"Parameterless constructor called\n"; }
     A(int x) {
      cout<<"Parameterized constructor called\n"; 
      k = x;
      ptr = new int[k];
      for(int i = 0; i < k; i++) {
        *(ptr + i) = 2*i + 1;
      }
     }
     
     //A(const A &obj) { cout<<"Shallow-copy!!default copy constructor\n"; } 
     A(const A &obj) {
       cout<<"Copy constructor called\n";
       k = obj.k;
       ptr = new int[k];
       for(int i = 0; i < k; i++) {
         *(ptr + i) = 2*i;
       }
     }
    
     void display() {
      for(int i = 0; i<k;i++) { cout<<*ptr++<<" "; }
      cout<<endl;
     }
     A operator=(const A &obj) {
        cout<<"Assignment operator called\n";
        this->k = obj.k;
        ptr = new int[obj.k];
        for(int i = 0; i< obj.k; i++) {
           *(ptr + i) = i*i;
        }
        return *this;
     }
};

A bar() {
  A temp(4);
  return temp;
}

void foo(A obj) {

   obj.display();
}
int main() {

  A obj1(3);      //parameterized constructor
  A obj2 = obj1;  //copy constructor
  A obj3;        // parameterless constructor
  obj3 = obj1;   //Assigment operator
  cout<<"Obj1's data"<<endl;
  obj1.display();
  cout<<"Obj2's data"<<endl;
  obj2.display();
  cout<<"Obj3's data"<<endl;
  obj3.display();
  cout<<"calling foo()\n";
  foo(obj1);
  cout<<"Calling bar()\n";
  
  A obj4 = bar(); 
  obj4.display();
  //bar().display();
  return 0;
}
