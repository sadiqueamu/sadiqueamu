#include<iostream>
using namespace std;

int clean(int arr[],int n) {
  
  for(int i = 0; i < n; i++) {
    for(int j = i+1; j < n ; j++) {
       if(arr[i] == arr[j]) {
            for(int k = j; k < n - 1; k++) {
              arr[k] = arr[k+1];
            }
            n = n - 1;
            i = i - 1;
        } 
     }
   }
   return n;
}

int main() {

  int arr[] = {2,2,2,2,2,2};
  //int arr[0];
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Original array: "<<endl;
  for(int i = 0; i < size ; i++) cout<<arr[i]<<" ";
  cout<<"\n";
  int newSize = clean(arr,size);

  cout<<"New size of the array after removing duplicates is "<<newSize<<endl;
  for(int i = 0; i < newSize ; i++) cout<<arr[i]<<" ";
  cout<<"\n";
  return 0;
}
