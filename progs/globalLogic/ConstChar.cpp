#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {

char *str = "yellow";
char str1[] = "hello";
const char *p1 = "something";
char  const *p2 = "something more";

char* const p3 = "yet something else"; //p3 is constant pointer

//p3 = p2;   //this will throw error

cout<<"brk1"<<endl;

//*(p1+2) = 'n'; //this will also throw an error-> p1 is a pointer to const literal

//*(p2 + 2) = 'n'; // this will also throw an error const char * and char const * are same

//strcpy(str,"sadik"); //segmentation fault

//*(str + 2) = 'k';   //segmentation faulti -> str is pointer to const literal
//*(str1 + 2) = 'k';
//str = str1;
cout<<str<<endl;
return 0;

}
