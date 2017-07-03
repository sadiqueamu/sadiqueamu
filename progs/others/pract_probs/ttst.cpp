#include<iostream>
#include<stdio.h>
using namespace std;

int a = 10;

int* rtnptr() {

   int *c = new int(5);
   int b = 2;
   //return &a;  //this works as returning global reference
   //return &b; //this will throw an error
   return c;   // this works as returning a heap value
}

int main() {

int *ptr;
char *ctr;
double *dtr;
printf("%d\n");
cout<<"size of ptr = "<<sizeof(ptr)<<endl;
cout<<"size of ctr = "<<sizeof(ctr)<<endl;
cout<<"size of dtr = "<<sizeof(dtr)<<endl;

ptr = rtnptr();

cout<<*ptr<<endl;


return 0;

}
