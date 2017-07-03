#include<iostream>
#include<string.h>
using namespace std;

int main() {

char str[] = "sadik";
int n = strlen(str) - 1;
char *ptr = &str[n];
while(n >= 0) {
cout<<*ptr<<endl;
ptr--;
n--;
}

return 0;

}
