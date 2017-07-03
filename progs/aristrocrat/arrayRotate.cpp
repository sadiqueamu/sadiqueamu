#include<iostream>
using namespace std;

int main() {
	int arr[]= {1,2,3,4,5,6,7};
	int N,d;
	int *buf;
	int i,j;
	N = sizeof(arr)/sizeof(arr[0]);
	cout<<"d = \n";
	cin>>d; 
	buf = new int[d];
	for(i = 0; i < N; i++) { cout<<arr[i]<<" "; }
	cout<<endl;
	//make buffered array for pushing at the back 
	for(i = 0; i < d; i++) {
		buf[i] = arr[i];
	}
	//move the remaining array elements up
	for(i = 0,j = d; i<= N-d; i++,j++) {

		arr[i] = arr[j];
	}
	//push back the buffered elements
	for(i = N-d, j = 0; j < d; i++, j++) {
		arr[i] = buf[j];
	}
	for(i = 0 ; i < N; i++) { cout<<arr[i]<<" "; }
	cout<<endl;
	return 0;
}