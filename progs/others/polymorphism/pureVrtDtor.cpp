#include<iostream>
using namespace std;

class test {
public:
      test(){ cout<<"test()\n";}
      virtual ~test() = 0;
      //~test() { cout<<"~test()\n";}
};
test::~test() { cout<<"~test()\n"; }

class fromtest:public test {
public:
     fromtest() { cout<<"fromtest()\n";}
     ~fromtest() { cout<<"~fromtest()\n";}
};


int main() {

test* t1 = new fromtest;
delete t1;
return 0;

}
