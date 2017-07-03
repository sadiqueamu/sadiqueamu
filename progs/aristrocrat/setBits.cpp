#include<iostream>
using namespace std;

int main() {
	int num;
	int setBit=0;
	cout<<"Number is \n";
	cin>>num;
	while(num) {
		cout<<num%2
			;
		if(num%2) 
			setBit++;
		num = num/2;
	}
	cout<<endl<<"Nos of set bits is "<<setBit<<endl;
	cin.get();
	cin.get();
	return 0;
}