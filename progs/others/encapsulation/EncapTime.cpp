#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Time{
	int hours;
	int minutes;
	int seconds;
	char time[25];
	public:
	void ValidatedAndSetTime(int,int,int);
	
};

void Time::ValidatedAndSetTime(int hr,int mnt,int scs){
	if(hr < 0 || hr > 23 || mnt < 0 || mnt > 60 || scs < 0 || scs > 60){
		cout<<"Invalid Time\n";
	}
	else{
		sprintf(time,"%d:%d:%d",hr,mnt,scs);
                cout<<"The time is: "<<this->time<<"\n";
	}
}

int main(){
	Time t;
	int h,m,s;
	cout<<"Please enter hours,minutes and seconds\n";
	cin>>h>>m>>s;
	t.ValidatedAndSetTime(h,m,s);
	return 0;
}

