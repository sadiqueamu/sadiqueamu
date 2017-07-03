#include<iostream>
#include<string.h>
using namespace std;

class student{
	int rollno;
	char name[30];
	public:
	void setRollno(int);
	void setName(const char *);
	int getRollno();
	char* getName();
};

void student::setRollno(int no){
	if(no<1){
		cout<<"Invalid value\n";
	}
	else{
		this->rollno = no;
	}
}

void student::setName(const char *nm){
	if(!nm){
		cout<<"Invalid name\n";
	}
	else{
		strcpy(this->name,nm);
	}
};

int student::getRollno(){
	return this->rollno;
}
char* student::getName(){
	return this->name;
}

int main(){
	student stud;
	stud.setRollno(0);
	stud.setName(NULL);
	stud.setRollno(10);
	stud.setName("Spartacus");
	cout<<stud.getName()<<"\t"<<stud.getRollno()<<"\n";
	return 0;
}
