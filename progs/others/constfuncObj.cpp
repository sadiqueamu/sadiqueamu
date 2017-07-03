#include<iostream>
using namespace std;


class A {

const int a;
const int b;
mutable int c;
public:
     A(int x,int y,int z):a(x),b(y),c(z) { }
     int getSum() const { 
        if(c<5) {
           c = c + 2;   // c is mutable 
           //a = a + 3; //error a is const*/
        }
        return (a + b + c);
     }
    void display() { cout<<"Hello\n";}
};


int main() {
int b = 5;
const int* const a = &b;
int c = 2;
//*a = *a + 2;  error *a is const
//a = &c;  error a is const pointer
const A obj(2,3,4);
A obj1(1,2,3);
cout<<obj1.getSum()<<endl;
//cout<<obj.getSum()<<endl;
//obj.display();     const obj only calls const function
return 0;

}
