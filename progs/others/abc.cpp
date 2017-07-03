#include<iostream>
using namespace std;

class ABC{

private:
	ABC(){	cout<<"ABC is instantiated\n";}
	static ABC* ptr;
	//static bool checkABC;
	
public:
        static ABC* getABC();
        friend ABC* FriendofABC();
	void methodABC(){ cout<<"Inside methodABC\n";}
	~ABC(){ cout<<"Destructor called\n";
		delete ptr;}
};

ABC* ABC::ptr = NULL;

ABC* ABC::getABC(){
	ptr = new ABC;

	return ptr;
}

ABC* FriendofABC(){
	ptr = new ABC;
        return ptr;
}


int main(){
	ABC* A;
//	A = ABC::getABC();
        A = FriendofABC();
	A->methodABC();
        cout<<"Main terminates\n";
	return 0;
}
