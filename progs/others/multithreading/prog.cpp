#include<iostream>
#include<pthread.h>
#include<stdlib.h>
#define THREAD_NUMS 5
using namespace std;

void *printHello(void *tid) {

  long threadId;
  threadId = (long) tid;
  cout<<"Hello !! threadId# "<<threadId<<endl;
  
  pthread_exit(NULL);

}

int main() {

  pthread_t threads[THREAD_NUMS];
  int i;
  for(i = 0; i< THREAD_NUMS; i++) {
  
     int rc = pthread_create(&threads[i],NULL,printHello,(void*)i);
     if(rc) {
         cout<<"Error!!"<<endl;
         exit(-1);
     }
  }

 pthread_exit(NULL);
 return 0;
}
