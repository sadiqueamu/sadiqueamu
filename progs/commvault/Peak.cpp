int peak() {
  int arr[] = { 5,1,3,8,2,6};
  long peak = 10000 
  for(int i = 1; i < 5; i++) {
    if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
	    if(arr[i] < peak) {
		  peak = arr[i];
		}
	   }
  }
  if(peak < 10000)
     cout<<peak<<endl;
  else
    cout<<"No Peaks"<<endl;
 
 return 0;
}

513826