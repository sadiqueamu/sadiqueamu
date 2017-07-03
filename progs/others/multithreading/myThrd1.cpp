#include<iostream>
#include<pthread.h>
#include<stdio.h>
#include<string.h>
using namespace std;

class myClass {

  int id;
  char name[20];
public:
     myClass(int x,char* str):id(x) { 
        strcpy(name,str);
     }
     void getData(){
       cout<<"ID = "<<id<<" Name = "<<name<<endl;
     }
};


void *myThreadFunc(void *someClassObject) {

  myClass *ptr = (myClass*) someClassObject;
  ptr->getData();
  pthread_exit(NULL);

}

int main() {

pthread_t threads[5];
myClass *ptr[5];
char *names[5] = {"SALIM","SADIK","RASHIDA","FARIDA","SOHAIL"};
for(int i = 0; i < 5; i++) {
     
     ptr[i] = new myClass(i,names[i]);
     int rc = pthread_create(&threads[i],NULL,myThreadFunc,(void*)ptr[i]);
     if(rc) {
       cout<<"Error!!"<<endl;
       exit(-1);
     }
}

pthread_exit(NULL);
return 0;
}


