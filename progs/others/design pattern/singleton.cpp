#include<iostream>
using namespace std;
class singleton
{
private:
        //constructor
	singleton(){
		cout<<"No obect in existence, creating One!!"<<endl;
	}
	static bool instanceFlag;
	static singleton* single;
	public:
	static singleton* getinstance();
	void method();
	//Destructor
	~singleton(){
		cout<<"Destructor is called\n";
		instanceFlag=false;
                delete single;
	}
};

bool singleton::instanceFlag=false;
singleton* singleton::single=NULL;

singleton* singleton::getinstance(){
	if(!instanceFlag){
		single=new singleton;
		instanceFlag=true;
		return single;
	}
	else{
	        cout<<"Object already exists, returning the same!!\n";
		return single;
	}
}
void singleton::method(){
	cout<<"Method of Singleton class\n";
}
int main(){
		singleton* s1;
        //try{
			s1=singleton::getinstance();
			//throw(s1);
        		s1->method();
			singleton* s2;
			s2=singleton::getinstance();
            		//throw(s2);
			s2->method();
		//}
		//catch(singleton*){
			//cout<<"Sorry cannot create another instance\n";
		//}
		return 0;
}

