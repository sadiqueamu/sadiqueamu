#include<iostream>
using namespace std;

const int SIZE = 10;
struct addr {
    string name;
    string street;
    string city;
    string state;
    string zip;
};
template<typename stackType>
class stack {
	stackType stck[SIZE];
    int tos;

  public:
    stack() {
    tos = 0;
    }

    void push(stackType ob) {
        if(tos == SIZE) {
            cout<<"Stack is full\n";
        }
       
        stck[tos] = ob;
        tos++;
    }

    stackType pop() {
       if(tos == 0) {
           cout<<"Stack is empty\n";
           return {0};
       }
       tos--;
       return stck[tos];
    }
};

int main() {
	struct addr a1,a2,a3;
	stack<char> s1,s2;
	stack<struct addr> address;
	int i;

	a1.name = "SADIK KHAN";
	a1.street = "Sushant Lok";
	a1.city = "Gurgaon";
	a1.state = "Haryana";
	a1.zip = "122022";

	a2.name = "FAIZAN AHMED";
	a2.street = "Udayanagar";
	a2.city = "Bangalore";
	a2.state = "Karnataka";
	a2.zip = "588622";

	a3.name = "Abdullah Salim";
	a3.street = "Pondicherry University";
	a3.city = "Pondicherry";
	a3.state = "Puducherry";
	a3.zip = "566683";

	address.push(a1);
	address.push(a2);
	address.push(a3);
	
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	
	cout<<"popping S1\n\n";
	for(i=0; i<3; i++) { cout<<s1.pop() <<"\n"; }
	cout<<"popping S2\n\n";
	
	for(i=0; i<3; i++) { cout<<s2.pop() <<"\n"; }
	cout<<endl;
	
	stack<double> d1,d2;
	d1.push(1.1);
	d1.push(2.2);
	d1.push(3.3);
	d2.push(11.1);
	d2.push(22.2);
	d2.push(33.3);
	
	cout<<"popping D1\n\n";
	for(i=0; i<3; i++) { cout<<d1.pop() <<"\n"; }
	cout<<"popping D2\n\n";
	
	for(i=0; i<3; i++) { cout<<d2.pop() <<"\n"; }
	cout<<endl;
	
	cout<<"Popping addresses\n\n";
	struct addr poppedValues[3];
	
	for(i = 0; i<3; i++) {
	    poppedValues[i] = address.pop();
	}
	for(i=0; i<3; i++) { 
	    cout<<poppedValues[i].name<<"\n"<<poppedValues[i].city<<"\n"<<poppedValues[i].state<<"\n"<<poppedValues[i].zip<<"\n##########";
   }

	return 0;
}