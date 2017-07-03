#include<iostream>
#include<string.h>
using namespace std;

int main() {
    
    char str[3];
    int num;
    cout<<"What's the title"<<endl;
    cin>>str; 
    int len = strlen(str);
    if(len == 1) {
        num = str[0] - 39 - 26 + 1;
        cout<<num<<endl;
    }
    else {
        int num1,num2;
        num1 = str[0] - 39;
        num2 = str[1] -39;
        num =  (num1 - 26 +1) * 26 + (num2 - 26  + 1);
        cout<<num<<endl;
    }
    return 0;

} 
