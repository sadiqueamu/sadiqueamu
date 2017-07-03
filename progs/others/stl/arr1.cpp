#include<iostream>
#include<array>

using namespace std;


int main() {

  array<int,5> odd_numbers = {1,3,5,7,9};
  array<int,5> even_numbers = {2,4,6,8,10};
  odd_numbers.swap(even_numbers);
  array<int,3> just_a_check;
  just_a_check.fill(3);
  cout<<odd_numbers.at(2)<<endl;
  cout<<odd_numbers.at(3)<<endl;
  cout<<odd_numbers.front()<<endl;
  cout<<odd_numbers.back()<<endl;
  cout<<just_a_check.at(2)<<endl;
  
  return 0;
}
