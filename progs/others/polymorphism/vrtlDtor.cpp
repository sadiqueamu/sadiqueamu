#include<iostream>
using namespace std;

class base {

public:
     base() {
          cout<<"constructing base\n";
     }

     virtual ~base() {
          cout<<"destructing base\n";
     }
};

class derived:public base {

public:
     derived() {
          cout<<"constructing derived\n";
     }

     ~derived() {
          cout<<"destructing derived\n";
     }

};


int main() {

derived *dtr = new derived;
base *btr = dtr;
delete btr;

return 0;
}
