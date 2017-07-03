#include<iostream>
using namespace std;

template<typename X> 
void swapargs(X &a, X &b) {

    X temp;
    temp = a;
    a = b;
    b = temp;
}

//new-style specialization syntax

template<> void swapargs<int>(int &a,int &b) {

   cout<<"Inside int specialization.\n";
   int temp;
   temp = a;
   a = b;
   b = temp;
}

int main() {

    int i = 10,j=20;
    double x = 10.1,y = 23.3;
    char a = 'a',b = 'b';
    cout<<i<<"\t"<<j<<"\n";
    cout<<x<<"\t"<<y<<"\n";
    cout<<a<<"\t"<<b<<"\n";

    swapargs(i,j);
    swapargs(x,y);
    swapargs(a,b);
    cout<<"############################\n";
    cout<<i<<"\t"<<j<<"\n";
    cout<<x<<"\t"<<y<<"\n";
    cout<<a<<"\t"<<b<<"\n";
    return 0;
}

