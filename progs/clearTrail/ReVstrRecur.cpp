#include<iostream>
using namespace std;
 
/* Function to print reverse of the passed string */
char* reverse(char *str,int len)
{ 
   static int i = 0; 
   static char* rev;
   if(len) {
      rev = new char[len]; 
      len = 0; 
   }
   if (*str)
   {
       reverse(str+1,0);
       rev[i] = *str; 
       cout<<"rev["<<i<<"] = "<<rev[i]<<endl;
       i++;
       //cout<<*str<<endl; 
   }
   
   rev[i+1] = '\0';
   return rev;
   
}
 
/* Driver program to test above function */
int main()
{  
   int size;
   char a[] = "Sadik is here";
   size = sizeof(a)/sizeof(a[0]);
   cout<<size<<endl; 
   char *revStr = reverse(a,size);
   cout<<revStr<<endl;
   return 0;
}
