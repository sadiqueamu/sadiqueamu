#include<iostream>
#include<list>
using namespace std;

bool compare_function(string &s1,string &s2) {
return (s1.length() < s2.length());
}

int main() {
list<int> list1 = {2,4,5,6,1,3};
list<string> list2 = {"hh","hhh","h","hhhh"};
list1.sort();
list2.sort(compare_function);
list<int>::iterator it = list1.begin();
while(it!=list1.end()) {
    cout<<*it<<" ";
    it++;
}
cout<<endl;
list<string>::iterator it1 = list2.begin();
while(it1 != list2.end()) {
    cout<<*it1<<" ";
    it1++;
}
cout<<endl;
it = list1.end();
while(it != list1.begin()) {
     it--;
     cout<<*it<<" ";
}
cout<<endl;
return 0;
}
