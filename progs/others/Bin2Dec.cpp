#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char str[33];
	long int decimal = 0;
	int radix = 1;
	const int base = 2;
	int bit;
	cout<<"Enter a binary number\n";
	cin>>str;
	int len = strlen(str) - 1;
	while(len >=0) {
		if(str[len] == '0') {
			bit = 0;
		}
		else {
			bit = 1;
		}
		decimal = decimal+bit*radix;
		radix = radix*base;
		len--;
	}
	cout<<decimal<<endl;
}
