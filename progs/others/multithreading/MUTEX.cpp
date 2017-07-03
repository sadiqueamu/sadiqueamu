#include<iostream>
#include<pthread.h>
using namespace std;

long shared_data = 0;
pthread_mutex_t my_mutex;

void print_odd_even(void*) {

pthread_mutex_lock(&my_mutex);
  if(!shared_data%2) {
    cout<<"Even "<<shared_data<<endl;
    shared_data++;
  }
  else {
    cout<<"odd "<<shared_data<<endl;
    shared_data++;
  }
pthread_mutex_unlock(&my_mutex);
pthread_exit(NULL);
}

int main() {

pthread_t t1,t2;
int rc1,rc2;

rc1 = pthread_create(&t1,NULL,print_odd_even,(void*)t1); 
rc2 = pthread_create(&t1,NULL,print_odd_even,(void*)t2);


pthread_exit(NULL);
return 0;

}
