#include<iostream>
using namespace std;

template<typename X>
void compact (X *items,int count,int start,int end) {

    register int i;
    for(i=end + 1; i<count; i++, start++)
        items[start] = items[i];

    for( ; start<count; start++) 
        items[start] = (X) 0;
}

int main() {

   int num[7] = {0,1,2,3,4,5,6};
   char str[18] = "Generic Functions";

   int i;
   cout<<"Here is the uncompacted integer array:\n";
   for(i=0; i<7; i++)
       cout<<num[i]<<" ";
   cout<<endl;
   cout<<"Here is uncompacted string:\n";
   cout<<str;
   cout<<endl;
   cout<<"##############################\n";
   cout<<"Here is the compacted integer array:\n";
   compact(num,7,2,4);
   compact(str,18,6,10);

   for(i=0; i<7; i++)
       cout<<num[i]<<" ";
   cout<<endl;
   cout<<"Here is compacted string:\n";
   cout<<str;
   cout<<endl;
   return 0;
}

