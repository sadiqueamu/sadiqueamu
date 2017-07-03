#include<exception>
#include<iostream>
#include<stdexcept>
using namespace std;

class A {
    int a;
    int b;
    int c;
public:
     A(int x,int y) {
         a = x;
         b = y;
         if(!y) 
             throw runtime_error("Exception thrown in A()");
         c = x/y;
    }

    ~A() {
         cout<<"~A()"<<endl;
    }   
};

int main() {
    try {
        A ob(1,0);
    }
    catch(const exception& e) {
        cerr<<e.what()<<endl;
    }
    return 0;
}
