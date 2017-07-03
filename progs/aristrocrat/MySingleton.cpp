#include<iostream>

using namespace std;

class Myclass {
private:
	Myclass(){
			cout<<"Creating object"<<endl;
	}
public:
	static Myclass *ptr;
	static bool isObjectExisting;
	static Myclass* getObject();
	void someMethod() {
		cout<<"someMethod() of MyClass\n";
	}
	 ~Myclass() {
		isObjectExisting = false;
	 }
};

Myclass* Myclass::ptr = NULL;
bool Myclass::isObjectExisting = false;

Myclass* Myclass::getObject() {
	if(!isObjectExisting) {
	        isObjectExisting = true;
		ptr = new Myclass;
	}
       else {
       		cout<<"oops!!!,Cannot create another instance!!";
	        return NULL;
       }
}

int main() {
	
	Myclass* ptr1[5];
        int i = 0;
	while(i < 5) {
		ptr1[i] = Myclass::getObject();
		if(ptr1[i]){
			ptr1[i]->someMethod();
		}
		else {
			cout<<"Object already existing\n";
		}
		i++;
	}
	
	return 0;
	
} 
