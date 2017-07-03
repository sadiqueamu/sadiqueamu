#include<iostream>
#include<string.h>
using namespace std;

int countDecodings(char digits[],int n) {
  if(n == 0 || n == 1) 
    return 1;

  int count = 0;

  if(digits[n-1] > '0') {
    //static int track;
    count = countDecodings(digits,n-1);
    //cout<<track++<<" - >Digits[n-1] < 0"<<" Value of count "<<count<<endl;
  }
  
  if(digits[n-2] < '2' || digits[n-2] == '2' && digits[n-1] < '7') {
    static int track2;  
    count += countDecodings(digits,n-2);
    //cout<<track2++<<" - >second case"<<" Value of count "<<count<<endl;
  }
  return count;
}

int main() {
  char digits[] = "1221";
  int len = strlen(digits);

  int count = countDecodings(digits,len);
  cout<<"The count of the decodings is "<<count<<endl;
  return 0;
}