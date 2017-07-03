#include<iostream>
using namespace std;

int main() {
  
  int arr[] = {2,4,11,8,9,5};
  int max1;
  int max2;
  if(arr[0] > arr[1]) {
    max1 = arr[0];
    max2 = arr[1];
  }
  else {
    max1 = arr[1];
    max2 = arr[0];
  }

  for(int i = 2;i < 6; i++) {
    if(arr[i] > max1) {
      max2 = max1;
      max1 = arr[i];
    }
   
    if(arr[i] < max1) {
      if(arr[i] > max2)
        max2 = arr[i]; 
    }
  }

  cout<<"Second largest is "<<max2<<endl;
  cout<<"Largest is "<<max1<<endl;
  return 0;

}