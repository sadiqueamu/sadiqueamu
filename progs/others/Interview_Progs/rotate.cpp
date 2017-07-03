#include<iostream>
using namespace std;

void rotate(int arr[],int d,int n) {
   int temp[d]; 
   int i,j;
   int x = 0;
   for(i = 0; i < d; i++) {
      temp[x] = arr[i];
      x++;
   }
    
   for(j = d,i = 0; j <= n; j++,i++) {
     arr[i] = arr[j];
   }
   
   for(i = (n-d+1),j = 0; i <= n; i++,j++) {
     arr[i] = temp[j];
   }
}

int main() {
  int arr[] = {1,2,3,4,5,6};
  int d = 2;
  int n = sizeof(arr)/sizeof(arr[0]);
  for(int j = 0; j < n; j++)
    cout<<arr[j]<<" ";

  rotate(arr,d,n-1);
  cout<<endl;

  for(int i = 0; i < n;i++)
    cout<<arr[i]<<" ";

  cout<<endl;
  return 0;
} 