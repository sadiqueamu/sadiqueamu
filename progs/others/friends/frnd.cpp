#include<iostream>
#include<string.h>
using namespace std;

class FriendClass;

class OnlyFriends{

      char secret[5][10];
      friend class FriendClass;
      friend void display(const OnlyFriends &o);
};

class FriendClass{
	public:
	void init(OnlyFriends &o){
		for(int i=0;i<5;i++){
			cout<<"Tell me the secrets "<<i<<":";
			cin>>o.secret[i];
		}
	}
};
void display(const OnlyFriends &o){
	for(int i=0;i<5;i++){
		cout<<o.secret[i]<<endl;
	}
}

int main(){
	OnlyFriends o;
	FriendClass f;
	f.init(o);
	display(o);
	return 0;
}


