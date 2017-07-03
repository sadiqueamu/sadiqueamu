#include<iostream>

using namespace std;

class base {

public:
      virtual ~base() = 0; //pure virtual destructor

};

class derived:public base {

public:
      ~derived() {
         cout<<"destructing derived\n";
      }

};

base::~base() {
     cout<<"Pure virtual destructor is called\n";
}

int main() {

base *bptr = new derived;

delete bptr;

return 0;

}       
