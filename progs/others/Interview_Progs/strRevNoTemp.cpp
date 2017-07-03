#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main() {

char str[20];
char temp;
cout<<"Enter a string\n";
cin>>str;
int i = 0,j;

j = strlen(str) - 1;
cout<<str<<endl;
while(i != j and  j > i) {
   temp = str[j];
   str[j] = str[i];
   str[i] = temp;
   i++;
   j--;
   //cout<<str<<endl;
}
 
cout<<str<<endl;

return 0;

}
