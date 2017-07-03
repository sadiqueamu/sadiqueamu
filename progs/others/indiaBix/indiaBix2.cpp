#include<iostream>
using namespace std;
 
int main()
{
    int x = 0;
    int &y = x; 
    cout<<"y = "<<y<<" x = "<<x<<endl;
    y = 5; 

    cout<<"x = "<<x<<" y = "<<y<<endl;
    while(x <= 5)
    {   
        cout<<"here"<<endl;
        cout<< y++ << " ";
        x++;
    }
    cout<<"y = "<<y<<endl;
    cout<<"x = "<<x<<endl; 
    return 0; 
}
