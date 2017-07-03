#include<iostream>
using namespace std;

bool clash(int pos1,int pos2,int j1,int j2) {
   if(j1 > pos2 - pos1) {
       if((pos1 + j1) - pos2 == j2) {
          cout<<"Kangaroos clashed\n";
          return true;
        }
        else {
          cout<<"kangaroos didn't clash!! Keep Jumping\n";
          return false;
        }
   }
   else {
     cout<<"Kangaroos didn't clash!! Keep Jumping\n";
     return false;
   }
}

int main() {
  int kpos1,kpos2,jk1,jk2;
  bool meet;
  do {
     cout<<"Enter the current positions of kangaroos of both the kangaroos\n";
     cout<<"Kangaroo 1 = ";
     cin>>kpos1;
     cout<<"\nKangaroo 2 = ";
     cin>>kpos2;
     cout<<"\nEnter the hops made by both kangaroos\n";
     cout<<"Kangaroo 1 hops = ";
     cin>>jk1;
     cout<<"\nKangaroo 2 hops = ";
     cin>>jk2;
     meet = clash(kpos1,kpos2,jk1,jk2); 
  } while(!meet);
  return 0;
}
