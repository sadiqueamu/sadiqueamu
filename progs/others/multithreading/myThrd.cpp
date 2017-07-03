#include<iostream>
#include<stdio.h>
#include<pthread.h>
#include<string>
#define NUM_THREADS 5
using namespace std;

void *myFunc(void *threadid) {

  long tid = long(threadid);
  string name;
  cout<<"what's your name?\n";
  cin>>name;
  cout<<"Hello"<<name<<"you got THREAD# "<<tid<<endl;
  pthread_exit(NULL);
}

int main() {

  pthread_t threads[NUM_THREADS];
  pthread_attr_t attr;
  int rc;
  void *status;
  long t;
  /* Initialize and set thread detached attribute */
    pthread_attr_init(&attr);
    pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);


  for(int i = 0; i < 5 ; i++) {
    cout<<"main() creating THREAD# "<<i<<endl;
    int rc = pthread_create(&threads[i],&attr,myFunc,(void*)(i));
    if(rc)
       cout<<"ooops!!Error!!\n";
  }

  /* Free attribute and wait for the other threads */
    pthread_attr_destroy(&attr);
    for(t=0; t<NUM_THREADS; t++) {
       rc = pthread_join(threads[t], &status);
       if (rc) {
          printf("ERROR; return code from pthread_join() is %d\n", rc);
          exit(-1);
          }
       printf("Main: completed join with thread %ld having a status of %ld\n",t,(long)status);
       }

  pthread_exit(NULL);
  return 0;

}
   
