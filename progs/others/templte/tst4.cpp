#include<iostream>
using namespace std;

template<typename X>
void fun(const X& a) {

	static int i = 10;
	cout<<++i<<"\n";
}

int main() {

	fun<int>(1);
	fun<int>(2);

	fun<double>(1.0);
	fun<double>(2.2);
	
	return 0;
}
