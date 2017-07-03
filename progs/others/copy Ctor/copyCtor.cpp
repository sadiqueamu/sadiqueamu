#include<iostream>
#include<stdlib.h>

using namespace std;

class A { 

    int x;
    int *ptr;

public:
    A() { }
    A(int a) {
        x = a;
        ptr = (int*)malloc(sizeof(int)*x);
        int i = 0;
        cout<<"X from normal ctor "<<x;
        while(i < x) {
           ptr[i] = 2*i+1;   
           i++;
        }
    }
    
    A(A &a) {
        this->x = a.x;
        ptr = (int*)malloc(sizeof(int)*a.x);
        int i = 0;
        cout<<"\nX from copy ctor "<<this->x<<endl;
        while(i < a.x) {
             ptr[i] = 2*i;
            i++;
         }
    }

   void display() {
        cout<<"X from display() "<<this->x<<endl; 
        int i = 0;
        while(i < this->x) {
            cout<<ptr[i]<<endl;
            i++;
         }
         cout<<"****DONE*****"<<endl;
   }
   A operator=(A ob2);
};

A A::operator=(A ob2) {

     this->x = ob2.x;
     cout<<"X from assigment operator "<<ob2.x<<endl;
     ptr = (int*)malloc(sizeof(int)*ob2.x);
     int i = 0;
     while(i < this->x) {
     
         ptr[i] = i*i;
         i++;
     } 
     return *this;
}
    

int main() {

A a1(4);
A a2=a1;
a1.display();
a2.display();
A a3;
a3 = a2;
a3.display();
return 0;

}
