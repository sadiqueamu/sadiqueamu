#include<iostream>
using namespace std;

class test {
	const int x;
public:
	/*test(int a):x(a) { }*/ 
	test(int a) {
		x = a;
	}
	int getX() { return x; }
};

int main() {
	test t(2);
	cout<<t.getX()<<endl;
	return 0
}
