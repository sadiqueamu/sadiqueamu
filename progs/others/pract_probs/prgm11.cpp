#include<iostream>
using namespace std;
template<class T>

bool search(T array[],T value ,int cnt) {
    int i;
    for(i = 0; i < cnt ; i++) {
        if(array[i] == value) {
            return true;
        }
        return false;
    }
}

int main() {

double array[] = {1.2,3.2,4.3,5.6,6.5,7.7};
int array1[] = {2,3,14,8,15};
bool val1,val2;
val1 = search(array,6.5,6);

if(val1)
   cout<<"search successful\n";
else
   cout<<"search unsuccessful\n";

val2 = search(array1,12,5);
if(val2) 
   cout<<"search successful\n";
else
   cout<<"search unsuccessful\n";
return 0;
}
