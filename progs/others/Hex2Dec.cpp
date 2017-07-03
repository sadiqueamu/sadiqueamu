#include<iostream>
#include<string.h>

using namespace std;

int main() {

   char hex[9];
   long int dec = 0;
   int radix = 1;
   const int base = 16;
   cout<<"Enter a Hexadecimal number\n";
   cin>>hex;
   int len = strlen(hex) - 1;

   while(len >=0) {

     if(hex[len] > 47 && hex[len] < 58) {
        hex[len] = hex[len] - 48;
     }
     if(hex[len] > 64 && hex[len] < 71) {
        hex[len] = hex[len] - 55;
     }
     if(hex[len] > 96 && hex[len] < 103) {
        hex[len] = hex[len] - 87;
     }
     dec = dec + hex[len] * radix;
     radix = radix * base;
     len--;
  }
  cout<<dec<<endl;
  return 0;
}

