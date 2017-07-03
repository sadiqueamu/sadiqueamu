#include<iostream>
#include<set>

using namespace std;

int main() {

int data[] = {10,73,12,22,73,73,12};
int temp;
multiset<int> mymultiset(data,data+7);
temp = data[0];
cout<<data[0]<<" appears " <<mymultiset.count(data[0])<<" times "<<endl;

for(int i = 1; i< mymultiset.size(); i++) {
if(temp == data[i])
  continue;
else {
   temp = data[i];
   cout<<data[i]<<" appears " <<mymultiset.count(data[i])<<" times "<<endl;
}
}
return 0;
}
