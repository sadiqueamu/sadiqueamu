#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
bool unique(char *start, char *end);
void SubStr(char* str,int len);

void SubStr(char* str,int len) {
  char *begin = str;
  bool done = false;
  char *temp;
  bool flag;
  char *last = &str[len];
  while(last >= begin) {   
     flag = unique(begin,last);
     if(flag) {
       while(begin < last) {
         cout<<*begin;
         begin++;
       }
       /*temp = *(last + 0);
       *(last + 0) = '\0';
       //cout<<*begin<<endl;
       printf("%s\n",begin);*/
       done = true;
     }
     if(done)
       break;
     last--;
  }
  cout<<endl;
  begin = &str[1];
  last = &str[len];
  while(begin <= last ) {
     flag  = unique(begin,last);
     if(flag) {
       printf("%s\n",begin); 
       done = true;
     }
     if(done)
       break;
     begin++;
  } 
} 


bool unique(char *start, char *end) {

  char *ptr;
  char *qtr;
  ptr = start; 
  bool flag = true;
  while(ptr <= end ) {
    qtr = ptr + 1;
    while(qtr <= end) {
      if(*ptr == *qtr) {
        flag = false;
        break;
      }
      qtr++; 
    }
    ptr++;
  }
  return flag;
}

int main() {
  char str[] = "EBEDCE";
  int len = strlen(str) - 1;
  SubStr(str,len);
  return 0;
} 