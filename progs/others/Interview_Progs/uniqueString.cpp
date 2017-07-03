#include<iostream>
using namespace std;

bool unique(char str[]) {
  
  int i = 0;
  int j;
  bool flag = false;
  while(str[i] != '\0') {
    j = i + 1;
    while(str[j] != '\0') {
      if(str[i] == str[j])
        flag = true;
      j++;
    } 
    i++;
}
  return flag;
}

int main() {

  char str[] = "SAADIK";
  bool flag = unique(str);
  if(flag) 
    cout<<"Not Unique\n";
  else
    cout<<"Unique\n";

  return 0;
}
   
