#include<iostream>
using namespace std;

class loc {
     int longitude;
     int latitude;
public:
     loc(int lg = 0,int lt = 0):longitude(lg),latitude(lt) { }
     void display() {
         cout<<"Longitude = "<<longitude<<endl;
         cout<<"Latitude = "<<latitude<<endl;
         cout<<"#####################"<<endl;
     }
     
     friend loc operator+(loc ob1,loc ob2);

     loc operator++(int x) {
         this->longitude++;
         this->latitude++;
         return *this;
     }
     friend loc operator--(loc &ob);

};

loc operator--(loc &ob) {

     --ob.longitude;
     --ob.latitude;
     return ob;
}

loc operator+(loc ob1,loc ob2) {

     loc temp;
     temp.longitude = ob1.longitude + ob2.longitude;
     temp.latitude = ob1.latitude + ob2.latitude;
     return temp;
}

int main() {

loc ob1(10,15);
loc ob2(5,10);
loc ob3;
ob3 = ob1 + ob2;
ob2++;
--ob1;
ob1.display();
ob2.display();
ob3.display();
return 0;

}
