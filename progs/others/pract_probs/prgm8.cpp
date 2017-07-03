#include<iostream>
using namespace std;

class cube {
     int x;
     int y;
     int z;
public:
     cube(int i= 0, int j = 0, int k = 0) {
         x = i;
         y = j;
         z = k;
     }
     int volume() {
         return x*y*z;
     }
};


int main() {

cube a(2,5,7), b;
cout<<"a's volume = "<<a.volume()<<endl;
cout<<"b's volume = "<<b.volume()<<endl;
return 0;

}
