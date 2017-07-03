#include<iostream>
using namespace std;
class test;
test* friendOfTest();
class test{
private: 
test(){}
static test* ptr;
public:
friend test* friendOfTest();
/*friend test* friendOfTest(){    //First approach
        ptr = new test;
        return ptr;
}*/
void someMethod(){ cout<<"someMethod(\n";}
};

test* test::ptr=NULL;

test* friendofTest(){         //Second approach
	test::ptr = new test;
	return ptr;
}

int main(){
test* t;
t = friendofTest();
t->someMethod();
return 0;
}