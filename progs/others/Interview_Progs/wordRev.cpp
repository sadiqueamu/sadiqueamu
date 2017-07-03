#include<iostream>
#include<string.h>
using namespace std;

/*Utility function to reverse each characters of a word*/
void revWord(char str[],int i,int j) {
  char temp;
  while(i != j and  j > i) {
    temp = str[j];
    str[j] = str[i];
    str[i] = temp;
    i++;
    j--;
  }
}

int main() {
  char str[] = "Welcome to the beautiful world";
  int i = 0,j;
  j = strlen(str) - 1;
  cout<<str<<endl;
  revWord(str,i,j);
  int k = 0;
  int t = 0;
  cout<<str<<endl;
  while(str[k] != '\0') {
    if(str[k] == ' ') {
      revWord(str,t,k-1);
      t = k+1;
    }
    k++;
  }

  revWord(str,t,k-1);
  cout<<str<<endl;
  return 0;
}

/***o/p*******/
/*Welcome to the beautiful world
  dlrow lufituaeb eht ot emocleW
  world beautiful the to Welcome
*/